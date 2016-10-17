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
import nova.time.Timer;

public class MathDemo extends NovaObject
{
	
	
	
	
	
	public MathDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		int iterations;
		Timer timer;
		int i;
		NovaConsole.writeLine(new NovaString("Beginning benchmark..."));
		iterations = 999999;
		timer = new Timer().start();
		i = (int)0;
		for (; i < (int)iterations; i++)
		{
			try
			{
				NovaMath.sin(i);
			}
			catch (Exception e)
			{
			}
			finally
			{
			}
		}
		Timer.stop();
		NovaConsole.writeLine(NovaInt.toString(iterations).concat(new NovaString(" iterations of Math.sin() in ").concat(NovaLong.toString(timer.accessor_duration()).concat(new NovaString("ms")))));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
