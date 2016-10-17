package example.network;

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
import example.network.ConnectionThread;

public class ClientDemo extends NovaObject
{
	
	
	
	
	
	public ClientDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		ClientSocket socket;
		NovaString ip;
		int port;
		boolean connected;
		socket = new ClientSocket();
		ip = new NovaString("127.0.0.1");
		port = 5675;
		NovaConsole.writeLine(new NovaString("Attempting to connect to ").concat(ip.concat(new NovaString(":").concat(NovaInt.toString(port)))));
		connected = socket.connect(ip, port);
		if (connected)
		{
			ConnectionThread thread;
			thread = new ConnectionThread(socket.connection);
			thread.start();
			NovaConsole.writeLine(new NovaString("Connected!"));
			while (socket.connection.connected)
			{
				NovaString message;
				message = NovaConsole.readLine();
				if (message.equals(new NovaString("q")))
				{
					socket.close();
					break;
				}
				socket.connection.out.write(message);
			}
			socket.close();
		}
		else
		{
			NovaConsole.writeLine(new NovaString("Failed to connect"));
			NovaConsole.waitForEnter();
		}
	}
	
	public void init()
	{
	}
	
}
