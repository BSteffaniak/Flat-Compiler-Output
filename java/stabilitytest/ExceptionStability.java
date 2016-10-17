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
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;
import stabilitytest.StabilityTestException;

public class ExceptionStability extends StabilityTestCase
{
	
	
	
	
	
	public ExceptionStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		boolean worked;
		NovaConsole.writeLine(new NovaString("Checking Exception handling..."));
		worked = false;
		try
		{
			testException();
		}
		catch (Exception e)
		{
			worked = true;
		}
		finally
		{
		}
		if (!worked)
		{
			program.fail(new NovaString("Failed; uncaught Exception"));
		}
	}
	
	private void testException()
	{
		boolean worked;
		worked = false;
		try
		{
			NovaConsole.write(new NovaString("Checking DivideByZeroException... "));
			try
			{
				int den;
				int i;
				int nova_zero_check27;
				den = 0;
				nova_zero_check27 = den;
				if (nova_zero_check27 == 0)
				{
					throw new DivideByZeroException();
				}
				i = 43 / nova_zero_check27;
			}
			catch (DivideByZeroException e)
			{
				worked = true;
				NovaConsole.writeLine(new NovaString("OK"));
				NovaConsole.write(new NovaString("Checking StabilityTestException... "));
				throw new StabilityTestException();
			}
			finally
			{
			}
			program.fail(new NovaString("Failed to catch DivideByZeroException"));
		}
		catch (StabilityTestException e)
		{
			if (!worked)
			{
				program.fail(new NovaString("Failed; uncaught DivideByZeroException"));
			}
			NovaConsole.writeLine(new NovaString("OK"));
			throw new Exception();
		}
		finally
		{
		}
		if (!worked)
		{
			program.fail(new NovaString("Failed; uncaught StabilityTestException"));
		}
	}
	
}
