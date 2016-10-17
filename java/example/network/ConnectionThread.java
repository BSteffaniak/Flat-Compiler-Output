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

public class ConnectionThread extends Thread
{
	private ConnectionSocket socket;
	
	
	
	
	
	public ConnectionThread(ConnectionSocket socket)
	{
		init(socket);
	}
	
	public void init(ConnectionSocket socket)
	{
		this.socket = socket;
	}
	
	public void run()
	{
		while (true)
		{
			NovaString message;
			if (!socket.validateConnection())
			{
				NovaConsole.writeLine(new NovaString("Disconnected."));
				break;
			}
			message = socket.in.readString();
			NovaConsole.writeLine(new NovaString("HE SAYS: ").concat(message));
		}
	}
	
}
