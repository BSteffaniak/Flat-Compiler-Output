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
import nova.datastruct.list.LinkedList;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;
import nova.datastruct.list.ArrayIterator;

public class LambdaStability extends StabilityTestCase
{
	
	
	
	
	
	public LambdaStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		NovaArray list;
		IntArray list2;
		NovaString mappedOutput;
		void contextArg37;
		void contextArg38;
		NovaString mappedExpected;
		LinkedList linked;
		NovaArray repeated;
		void contextArg39;
		ArrayIterator nova_local_0;
		NovaString item;
		NovaConsole.write(new NovaString("Checking lambdas... "));
		list = generated17();
		list2 = generated18();
		mappedOutput = list.filter(testLambda37).map(testLambda38).join(new NovaString(", "));
		mappedExpected = new NovaString("0: this?, 1: test?, 2: what shows up?");
		if (!mappedOutput.equals(mappedExpected))
		{
			program.fail(new NovaString("Failed first list map with 2 args. Expected '").concat(mappedExpected.concat(new NovaString("' but received '").concat(mappedOutput.concat(new NovaString("'"))))));
		}
		linked = new LinkedList();
		linked.add(new NovaString("test")).add(new NovaString("test2")).add(new NovaString("test3"));
		if (!linked.reverse().join(new NovaString(", ")).equals(new NovaString("test3, test2, test")))
		{
			program.fail(new NovaString("Failed reverse linked list"));
		}
		if (!linked.join(new NovaString(", ")).equals(new NovaString("test, test2, test3")))
		{
			program.fail(new NovaString("Failed forward linked list"));
		}
		repeated = list.map(testLambda39);
		nova_local_0 = (repeated).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			item = nova_local_0.accessor_next();
			if (!item.equals(new NovaString("test")))
			{
				program.fail(new NovaString("Map with no arguments failed"));
			}
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private NovaArray generated17()
	{
		NovaString[] temp;
		temp = new NovaString[7];
		temp[0] = new NovaString("this");
		temp[1] = new NovaString("is");
		temp[2] = new NovaString("a");
		temp[3] = new NovaString("test");
		temp[4] = new NovaString("to");
		temp[5] = new NovaString("see");
		temp[6] = new NovaString("what shows up");
		return new NovaArray(temp, 7);
	}
	
	private IntArray generated18()
	{
		int[] temp;
		temp = new int[7];
		temp[0] = 1;
		temp[1] = 2;
		temp[2] = 3;
		temp[3] = 4;
		temp[4] = 5;
		temp[5] = 6;
		temp[6] = 7;
		return new IntArray(temp, 7);
	}
	
	private static boolean testLambda37(NovaString x, int _2, NovaArray _3)
	{
		return x.count >= 4;
	}
	
	private static NovaObject testLambda38(NovaString x, int i, NovaArray _3)
	{
		return NovaInt.toString(i).concat(new NovaString(": ").concat(x.concat(new NovaString("?"))));
	}
	
	private static NovaObject testLambda39(NovaString _1, int _2, NovaArray _3)
	{
		return new NovaString("test");
	}
	
}
