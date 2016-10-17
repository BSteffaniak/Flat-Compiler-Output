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
import stabilitytest.StabilityExceptionHandler;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;
import stabilitytest.ThreadImplementation;

public class ThreadStability extends StabilityTestCase
{
	
	
	
	
	
	public ThreadStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		NovaArray threads;
		NovaConsole.writeLine(new NovaString("Checking Thread.nova with 20 Threads... "));
		threads = new NovaArray(20);
		createThreads(threads, 20);
		checkMemoryAccess();
		joinThreads(threads, 20);
	}
	
	private void createThreads(NovaArray threads, int amount)
	{
		StabilityExceptionHandler handler;
		int i;
		handler = new StabilityExceptionHandler(program);
		i = (int)0;
		for (; i < (int)amount; i++)
		{
			threads.set(i, new ThreadImplementation(10, 10));
			threads.get(i).start();
		}
	}
	
	private static void checkMemoryAccess()
	{
		int i;
		Thread.sleep(30);
		NovaConsole.write(new NovaString("Checking memory access with multi-threading... "));
		i = (int)0;
		for (; i < (int)1000; i++)
		{
			NovaString s;
			s = NovaInt.toString(i);
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static void joinThreads(NovaArray threads, int amount)
	{
		int i;
		i = (int)0;
		for (; i < (int)amount; i++)
		{
			threads.get(i).join();
		}
	}
	
}
