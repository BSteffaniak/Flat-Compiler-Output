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
import nova.datastruct.list.Stack;

public class Test extends NovaObject
{
	
	
	
	
	
	public Test()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		Stack s;
		int d;
		s = new Stack();
		s.push(new NovaString("How are you?"));
		s.push(new NovaString("Larry"));
		s.push(new NovaString("Hello"));
		while (!s.accessor_empty())
		{
			NovaConsole.writeLine(s.pop());
		}
		d = 5;
		NovaConsole.writeLine(new NovaString("Comparison: ").concat(NovaInt.toString(new NovaInt(d).compareTo(3))));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
