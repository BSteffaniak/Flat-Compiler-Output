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
import nova.network.ConnectionSocket;
import nova.network.ServerSocket;

public class OutputThread extends Thread
{
	private ServerSocket serverSocket;
	private ConnectionSocket socket;
	
	
	
	
	
	public OutputThread(ServerSocket serverSocket, ConnectionSocket socket)
	{
		init(serverSocket, socket);
	}
	
	public void init(ServerSocket serverSocket, ConnectionSocket socket)
	{
		this.serverSocket = serverSocket;
		this.socket = socket;
	}
	
	public void run()
	{
		while (socket.connected)
		{
			NovaString message;
			message = NovaConsole.readLine();
			if (message.equals(new NovaString("q")))
			{
				serverSocket.close();
				break;
			}
			if (!socket.connected)
			{
				break;
			}
			socket.out.write(message);
		}
	}
	
}
