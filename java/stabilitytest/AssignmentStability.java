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
import stabilitytest.ClassWithProperties;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;

public class AssignmentStability extends StabilityTestCase
{
	
	
	
	
	
	public AssignmentStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		ClassWithProperties props;
		byte num;
		byte a;
		byte b;
		byte c;
		NovaConsole.write(new NovaString("Checking embedded property assignments... "));
		props = new ClassWithProperties();
		num = props.mutator_prop1(props.mutator_prop2(1));
		if (num != 1 || props.accessor_prop1() != 1 || props.accessor_prop2() != 1)
		{
			program.fail(new NovaString("Did not return mutated property value correctly. Expected 1, 1, 1 but received ").concat(NovaByte.toString(num).concat(new NovaString(", ").concat(NovaInt.toString(props.accessor_prop1()).concat(new NovaString(", ").concat(NovaInt.toString(props.accessor_prop2())))))));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking embedded primitive assignments... "));
		a = b = c = 1;
		if (a != 1 || b != 1 || c != 1)
		{
			program.fail(new NovaString("Did not set assigned primitive values correctly. Expected 1, 1, 1 but received ").concat(NovaByte.toString(a).concat(new NovaString(", ").concat(NovaByte.toString(b).concat(new NovaString(", ").concat(NovaByte.toString(c)))))));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
}
