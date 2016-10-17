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
import nova.network.ServerSocket;
import nova.network.ConnectionSocket;
import stabilitytest.ClientThread;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;

public class NetworkStability extends StabilityTestCase
{
	
	
	
	public static NovaString received;
	
	
	public NetworkStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		int port;
		ServerSocket server;
		ClientThread thread;
		ConnectionSocket connection;
		NovaString s;
		NovaConsole.writeLine(new NovaString("Checking network stability..."));
		port = 24243;
		server = createServer(port);
		thread = new ClientThread(program, port);
		thread.start();
		NovaConsole.writeLine(new NovaString("Accepting ClientSocket connection... "));
		connection = server.acceptClient();
		if (connection == null)
		{
			program.fail(new NovaString("Failed to accept the client"));
		}
		NovaConsole.writeLine(new NovaString("Sending String to ClientSocket... "));
		if (!connection.out.write(received))
		{
			program.fail(new NovaString("Server unable to send data to client"));
		}
		NovaConsole.writeLine(new NovaString("Waiting for String from ClientSocket... "));
		s = connection.in.readString();
		if (s.count != received.count || !s.equals(received))
		{
			program.fail(new NovaString("Server unable to receive correct message from client"));
		}
		thread.join();
		NovaConsole.write(new NovaString("Attempting to close ServerSocket connection... "));
		if (!server.close())
		{
			program.fail(new NovaString("Unable to close server"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private ServerSocket createServer(int port)
	{
		ServerSocket server;
		server = new ServerSocket();
		NovaConsole.write(new NovaString("Attempting to start ServerSocket on port ").concat(NovaInt.toString(port).concat(new NovaString("... "))));
		if (!server.start(port))
		{
			program.fail(new NovaString("Unable to start server on port ").concat(NovaInt.toString(port)));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		return server;
	}
	
}
