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

public class ToStringStability extends StabilityTestCase
{
	
	
	
	
	
	public ToStringStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		double d;
		byte b;
		int i;
		long l;
		NovaConsole.write(new NovaString("Checking toString implementations... "));
		d = 5.232;
		checkToString(new NovaString("Double"), new NovaDouble(d), new NovaString("5.232"));
		b = 127;
		checkToString(new NovaString("Byte"), new NovaByte(b), new NovaString("127"));
		i = 2147483647;
		checkToString(new NovaString("Int"), new NovaInt(i), new NovaString("2147483647"));
		l = -9223372036854775808;
		checkToString(new NovaString("Long"), new NovaLong(l), new NovaString("-9223372036854775808"));
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkToString(NovaString type, Number number, NovaString expected)
	{
		if (!number.toString().equals(expected))
		{
			program.fail((type).concat(new NovaString(".toString failed. expected ").concat((expected).concat(new NovaString(" but received ").concat((number).toString().concat(new NovaString("")))))));
		}
	}
	
}
