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

public class GenericDemo extends NovaObject
{
	
	
	
	
	
	public GenericDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		Stack strs;
		strs = new Stack();
		NovaConsole.writeLine(new NovaString("Pushing \"test\""));
		strs.push(new NovaString("test"));
		NovaConsole.writeLine(new NovaString("Pushing \"ASDFASDF\""));
		strs.push(new NovaString("ASDFASDF"));
		NovaConsole.writeLine(new NovaString("Pushing \"3!\""));
		strs.push(new NovaString("3!"));
		NovaConsole.writeLine(new NovaString("Pushing \"34!!4334\""));
		strs.push(new NovaString("34!!4334"));
		NovaConsole.writeLine(new NovaString("Pushing null"));
		strs.push(null);
		while (!strs.accessor_empty())
		{
			NovaString popped;
			popped = strs.pop();
			if (popped != null)
			{
				popped = new NovaString("\"").concat(popped.concat(new NovaString("\"")));
			}
			NovaConsole.writeLine(new NovaString("Popping: ").concat(popped));
		}
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
