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
import nova.network.ServerSocket;
import nova.network.ConnectionSocket;
import example.network.ConnectionThread;
import example.network.OutputThread;

public class ServerDemo extends NovaObject
{
	
	
	
	
	
	public ServerDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		NovaArray connections;
		ServerSocket socket;
		int port;
		connections = new NovaArray();
		socket = new ServerSocket();
		port = 25560;
		if (!socket.start(port))
		{
			NovaConsole.writeLine(new NovaString("Failed to start server"));
		}
		else
		{
			ConnectionSocket request;
			NovaConsole.writeLine(new NovaString("Started server on port ").concat(NovaInt.toString(port)));
			NovaConsole.writeLine(new NovaString("Waiting on client..."));
			request = socket.acceptClient();
			if (request == null)
			{
				NovaConsole.writeLine(new NovaString("Failed to accept client"));
			}
			while (request != null)
			{
				ConnectionThread thread;
				OutputThread othread;
				connections.add(request);
				thread = new ConnectionThread(request);
				thread.start();
				othread = new OutputThread(socket, request);
				othread.start();
				NovaConsole.writeLine(new NovaString("Waiting on anoter"));
				request = socket.acceptClient();
			}
			NovaConsole.writeLine(new NovaString("Exiting"));
		}
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
