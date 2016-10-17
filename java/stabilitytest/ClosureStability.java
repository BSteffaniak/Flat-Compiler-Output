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

public class ClosureStability extends StabilityTestCase
{
	private int number;
	
	
	private static double TOLERANCE;
	
	
	
	public ClosureStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	private void incrementNumber()
	{
		number++;
	}
	
	public void test()
	{
		TOLERANCE = 0.0000000001;
		testClosures();
	}
	
	private void testClosures()
	{
		NovaConsole.writeLine(new NovaString("Checking closures..."));
		testMathClosures();
		testInstanceClosure();
	}
	
	private void testMathClosures()
	{
		int a;
		int b;
		double value;
		NovaConsole.write(new NovaString("Checking static math closures... "));
		a = 5;
		b = 3;
		value = 0.5;
		if (callClosure(multiply, a, b) != multiply(a, b))
		{
			program.fail(new NovaString("Failed to call multiply(Int, Int) closure"));
		}
		if (callClosure(pow, a, b) != pow(a, b))
		{
			program.fail(new NovaString("Failed to call pow(Int, Int) closure"));
		}
		if (mathClosure(NovaMath.sin, value) - NovaMath.sin(value) >= TOLERANCE)
		{
			program.fail(new NovaString("Failed to call Math.sin(Double) closure"));
		}
		if (mathClosure(NovaMath.tan, value) - NovaMath.tan(value) >= TOLERANCE)
		{
			program.fail(new NovaString("Failed to call Math.tan(Double) closure"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void testInstanceClosure()
	{
		ClosureStability c;
		NovaConsole.write(new NovaString("Checking instance closures... "));
		c = new ClosureStability(program);
		instanceClosure(c.incrementNumber);
		if (c.number == 0)
		{
			program.fail(new NovaString("Failed to call incrementNumber() instance closure"));
		}
		instanceClosure(new ClosureStability(program).incrementNumber);
		instanceClosure(c.incrementNumber);
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static int callClosure(int closure, int a, int b)
	{
		return closure(a, b);
	}
	
	private static double mathClosure(double closure, double value)
	{
		return closure(value);
	}
	
	private static void instanceClosure(void closure)
	{
		closure();
	}
	
	private static int multiply(int value1, int value2)
	{
		return value1 * value2;
	}
	
	private static int pow(int base, int pow)
	{
		int value;
		int i;
		value = base;
		i = (int)0;
		for (; i < (int)(pow - 1); i++)
		{
			value = value * base;
		}
		return value;
	}
	
}
