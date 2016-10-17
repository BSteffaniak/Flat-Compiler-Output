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

public class ClosureDemo extends NovaObject
{
	
	
	
	
	
	public ClosureDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		ClosureDemo demo;
		demo = new ClosureDemo();
		demo.callClosure(multiply);
		demo.callClosure(pow);
		NovaConsole.waitForEnter();
	}
	
	private void callClosure(int closure)
	{
		int value;
		value = closure(5, 3);
		NovaConsole.writeLine(new NovaString("Closure returned ").concat(NovaInt.toString(value)));
	}
	
	private static int multiply(int value1, int value2)
	{
		NovaConsole.writeLine(new NovaString("multiply was called with ").concat(NovaInt.toString(value1).concat(new NovaString(" and ").concat(NovaInt.toString(value2)))));
		return value1 * value2;
	}
	
	private static int pow(int base, int pow)
	{
		int value;
		int i;
		NovaConsole.writeLine(new NovaString("pow was called with ").concat(NovaInt.toString(base).concat(new NovaString(" and ").concat(NovaInt.toString(pow)))));
		value = base;
		i = (int)0;
		for (; i < (int)(pow - 1); i++)
		{
			value = value * base;
		}
		return value;
	}
	
	public void init()
	{
	}
	
}
