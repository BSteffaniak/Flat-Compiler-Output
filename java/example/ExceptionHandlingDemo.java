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
import example.NonWholeDivisionException;

public class ExceptionHandlingDemo extends NovaObject
{
	
	
	
	
	
	public ExceptionHandlingDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		try
		{
			int result;
			result = divide(100, 5);
			NovaConsole.writeLine(new NovaString("After working example: ").concat(NovaInt.toString(result)));
			result = divide(100, 3);
			NovaConsole.writeLine(new NovaString("this output will not show."));
		}
		catch (NonWholeDivisionException e)
		{
			NovaConsole.writeLine(new NovaString("You used the divide() method incorrectly."));
		}
		finally
		{
			NovaConsole.writeLine(new NovaString("Exiting the try block."));
		}
		NovaConsole.writeLine(new NovaString("After the try block."));
		NovaConsole.waitForEnter();
	}
	
	private static int divide(int num, int den)
	{
		int nova_zero_check1;
		if (num % den != 0)
		{
			throw new NonWholeDivisionException();
		}
		nova_zero_check1 = den;
		if (nova_zero_check1 == 0)
		{
			throw new DivideByZeroException();
		}
		return num / nova_zero_check1;
	}
	
	public void init()
	{
	}
	
}
