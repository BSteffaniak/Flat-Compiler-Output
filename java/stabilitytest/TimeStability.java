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
import nova.time.Timer;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;

public class TimeStability extends StabilityTestCase
{
	
	
	
	
	
	public TimeStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		Timer timer;
		NovaConsole.write(new NovaString("Checking Time.nova... "));
		timer = new Timer();
		timer.start();
		Thread.sleep(100);
		timer.stop();
		if (timer.accessor_duration() >= 100 && timer.accessor_duration() < 130)
		{
			NovaConsole.writeLine(new NovaString("OK"));
		}
		else
		{
			program.fail(new NovaString("Failed; expected 100ms, found ").concat(NovaLong.toString(timer.accessor_duration()).concat(new NovaString("ms"))));
		}
	}
	
}
