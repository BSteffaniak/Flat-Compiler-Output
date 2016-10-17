package example;

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

public class ThreadDemoImplementation extends Thread
{
	private long millis;
	private NovaString word;
	
	
	
	
	
	public ThreadDemoImplementation(long millis, NovaString word)
	{
		init(millis, word);
	}
	
	public void init(long millis, NovaString word)
	{
		this.millis = millis;
		this.word = word;
	}
	
	public void run()
	{
		int i;
		i = (int)0;
		for (; i < (int)10; i++)
		{
			NovaConsole.writeLine(word);
			sleep(millis);
		}
	}
	
}
