package stabilitytest;

import java.util.Optional;
import nova.exception.ExceptionData;
import nova.exception.Exception;
import nova.exception.DivideByZeroException;
import nova.io.NovaConsole;
import nova.primitive.number.Number;
import nova.primitive.number.NovaByte;
import nova.primitive.number.NovaShort;
import nova.primitive.number.NovaInt;
import nova.primitive.number.NovaLong;
import nova.primitive.number.NovaFloat;
import nova.primitive.number.NovaDouble;
import nova.primitive.Null;
import nova.primitive.number.Char;
import nova.primitive.Bool;
import nova.datastruct.list.NovaArray;
import nova.datastruct.list.IntArray;
import nova.datastruct.list.CharArray;
import nova.datastruct.list.DoubleArray;
import nova.datastruct.list.IntRange;
import nova.thread.Thread;
import nova.thread.async.Async;
import nova.gc.GC;
import nova.math.NovaMath;
import nova.NovaObject;
import nova.NovaString;
import nova.System;
import nova.Class;
import nova.network.ClientSocket;
import stabilitytest.NetworkStability;
import stabilitytest.StabilityTest;

public class ClientThread extends Thread
{
	private int port;
	private StabilityTest program;
	
	
	
	
	
	public ClientThread(StabilityTest program, int port)
	{
		init(program, port);
	}
	
	public void init(StabilityTest program, int port)
	{
		this.program = program;
		this.port = port;
	}
	
	public void run()
	{
		ClientSocket client;
		NovaString ip;
		NovaString s;
		client = new ClientSocket();
		ip = new NovaString("127.0.0.1");
		NovaConsole.write(new NovaString("ClientSocket attempting to connect to ").concat((ip).concat(new NovaString(":").concat(NovaInt.toString((port)).concat(new NovaString("... "))))));
		if (!client.connect(ip, port))
		{
			program.fail(new NovaString("Failed to connect to localhost server"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.writeLine(new NovaString("Waiting for String from ServerSocket... "));
		s = client.connection.in.readString();
		if (s.count != NetworkStability.received.count || !s.equals(NetworkStability.received))
		{
			program.fail(new NovaString("Client unable to receive the correct message from server"));
		}
		NovaConsole.write(new NovaString("Attempting to send String to ServerSocket... "));
		client.connection.out.write(NetworkStability.received);
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Attempting to close ClientSocket... "));
		if (!client.close())
		{
			program.fail(new NovaString("Unable to close Client connection"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
}
