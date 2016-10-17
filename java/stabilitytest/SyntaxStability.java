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
import nova.datastruct.list.Iterator;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;
import stabilitytest.UnstableException;
import nova.datastruct.list.ArrayIterator;

public class SyntaxStability extends StabilityTestCase
{
	
	
	
	
	
	public SyntaxStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		checkLoops();
		checkUntil();
		checkMatchStatements();
		checkIterators();
		checkTernary();
		checkElvis();
		checkRepeat();
		checkNamedArguments();
		checkZipper();
	}
	
	private void checkMatchStatements()
	{
		int num;
		boolean worked;
		int val;
		boolean worked2;
		boolean nova_local_0;
		int nova_local_1;
		NovaConsole.write(new NovaString("Checking simple match statement... "));
		num = 3;
		worked = false;
		switch ((num))
		{
			case 1:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 2:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 3:
			worked = true;
			
			break;
			case 4:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			default:
			program.fail(new NovaString("Match failed to accept the correct case"));
			
		}
		if (!worked)
		{
			program.fail(new NovaString("FAIL"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking simple match statement with indentation... "));
		num = 3;
		worked = false;
		switch ((num))
		{
			case 1:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 2:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 3:
			worked = true;
			
			break;
			case 4:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			default:
			program.fail(new NovaString("Match failed to accept the correct case"));
			
		}
		if (!worked)
		{
			program.fail(new NovaString("FAIL"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking simple match statement with scopes... "));
		num = 3;
		worked = false;
		switch ((num))
		{
			case 1:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 2:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			case 3:
			worked = true;
			
			break;
			case 4:
			program.fail(new NovaString("Match accepted incorrect case"));
			
			break;
			default:
			program.fail(new NovaString("Match failed to accept the correct case"));
			
		}
		if (!worked)
		{
			program.fail(new NovaString("FAIL"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking match statement with variable case values... "));
		val = 1;
		num = 3;
		worked = false;
		if ((num) == (val++))
		{
			program.fail(new NovaString("Match accepted incorrect case"));
			
		}
		else if ((num) == val++)
		{
			program.fail(new NovaString("Match accepted incorrect case"));
			
		}
		else if ((num) == (val++))
		{
			worked = true;
			
		}
		else if ((num) == val++)
		{
			program.fail(new NovaString("Match accepted incorrect case"));
			
		}
		else
		{
			program.fail(new NovaString("Match failed to accept the correct case"));
		}
		
		if (!worked)
		{
			program.fail(new NovaString("FAIL"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking match statement with variable case values and fallthrough... "));
		val = 1;
		num = 3;
		worked = false;
		worked2 = false;
		nova_local_1 = (num++);
		do
		{
			if (nova_local_1 == val++)
			{
				program.fail(new NovaString("Match accepted incorrect case"));
				
				break;
			}
			else if (nova_local_1 == val++)
			{
				program.fail(new NovaString("Match accepted incorrect case"));
				
				break;
			}
			else if (nova_local_1 == val++)
			{
				worked = true;
				nova_local_0 = 1;
				
			}
			if (nova_local_0 || nova_local_1 == val++)
			{
				worked2 = true;
				
				break;
			}
			else
			{
				program.fail(new NovaString("Match failed to accept the correct case"));
			}
			
		}
		while (false);
		if (!worked || !worked2)
		{
			program.fail(new NovaString("FAIL"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkLoops()
	{
		checkWhileLoops();
		checkForLoops();
	}
	
	private void checkWhileLoops()
	{
		int num;
		int num2;
		int num3;
		NovaConsole.write(new NovaString("Checking inline while loop... "));
		num = 0;
		num2 = 0;
		num3 = 0;
		while (num < 100)
		{
			num++;
		}
		while (num2 < 100)
		{
			num2++;
		}
		while (num3 < 100)
		{
			if (true)
			{
				if (true)
				{
					num3++;
				}
			}
		}
		if (num != 100 || num2 != 100 || num3 != 100)
		{
			program.fail(new NovaString("Inline while loop failed."));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkForLoops()
	{
		int num;
		int num2;
		int num3;
		int i;
		int i2;
		int i3;
		NovaConsole.write(new NovaString("Checking inline for loop... "));
		num = 0;
		num2 = 0;
		num3 = 0;
		i = (int)0;
		for (; i < (int)100; i++)
		{
			num++;
		}
		i2 = (int)0;
		for (; i2 < (int)100; i2++)
		{
			num2++;
		}
		i3 = (int)0;
		for (; i3 < (int)100; i3++)
		{
			if (true)
			{
				if (true)
				{
					num3++;
				}
			}
		}
		if (num != 100 || num2 != 100 || num3 != 100)
		{
			program.fail(new NovaString("Inline for loop failed. Expected 100, 100, 100 received ").concat(NovaInt.toString((num)).concat(new NovaString(", ").concat(NovaInt.toString((num2)).concat(new NovaString(", ").concat(NovaInt.toString((num3)).concat(new NovaString(""))))))));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkUntil()
	{
		NovaObject obj;
		NovaConsole.write(new NovaString("Checking until statement... "));
		obj = null;
		if (!(obj != null))
		{
			obj = test1();
			if (!(obj != null))
			{
				obj = test2();
				if (!(obj != null))
				{
					obj = test3();
					if (!(obj != null))
					{
						program.fail(new NovaString("Failed to stop after correct condition"));
					}
				}
			}
		}
		if (obj == null)
		{
			program.fail(new NovaString("Failed to reach correct condition"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static NovaObject test1()
	{
		return null;
	}
	
	private static NovaObject test2()
	{
		return null;
	}
	
	private static NovaObject test3()
	{
		return new NovaObject();
	}
	
	private void checkMultipleReturnValues()
	{
		int ret1;
		int ret2;
		NovaString s1;
		NovaString s2;
		NovaConsole.write(new NovaString("Checking methods with multiple return values... "));
		ret1 = 1;
		ret2 = 2;
		ret1 = ret2();
		if (ret1 != 5 || ret2 != 2)
		{
			program.fail(new NovaString("Failed to pass over second return value"));
		}
		ret1 = 1;
		ret2 = 2;
		ret1 = swap(ret1, ret2);
		if (ret1 != 2 || ret2 != 1)
		{
			program.fail(new NovaString("Failed to swap primitive values with multiple return values"));
		}
		s1 = new NovaString("hello");
		s2 = new NovaString("world");
		s1 = swap2(s1, s2);
		if (!s1.equals(new NovaString("world")) || !s2.equals(new NovaString("hello")))
		{
			program.fail(new NovaString("Failed to swap String values with multiple return values"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static int ret2()
	{
		return 5;
	}
	
	private static int swap(int a, int b)
	{
		int nova_local_0;
		nova_local_0 = b;
		ret1 = a;
		return nova_local_0;
	}
	
	private static NovaString swap2(NovaString a, NovaString b)
	{
		NovaString nova_local_0;
		nova_local_0 = b;
		ret1 = a;
		return nova_local_0;
	}
	
	private static boolean filterFunc(NovaString i)
	{
		return i.count >= 4;
	}
	
	private static void foreachClosure(NovaString s)
	{
		if (s.count < 4)
		{
			throw new UnstableException(new NovaString("filtering failed"));
		}
	}
	
	private void checkIterators()
	{
		NovaArray list;
		NovaArray list2;
		Iterator iter;
		ArrayIterator nova_local_0;
		NovaString string;
		int n;
		NovaConsole.write(new NovaString("Checking filter functionality... "));
		list = generated19();
		list2 = list.filter(filterFunc);
		try
		{
			list2.forEach(foreachClosure);
		}
		catch (UnstableException e)
		{
			program.fail(new NovaString("Failed to filter data correctly"));
		}
		finally
		{
		}
		n = (int)0;
		for (; n < (int)list2.count; n++)
		{
			if (list2.get(n).count < 4)
			{
				program.fail(new NovaString("Failed to filter data correctly"));
			}
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking iterator functionality... "));
		iter = list2.iterator();
		while (iter.hasNext())
		{
			if (iter.next().count < 4)
			{
				program.fail(new NovaString("Failed to run iterator"));
			}
		}
		NovaConsole.writeLine(new NovaString("OK"));
		NovaConsole.write(new NovaString("Checking foreach loop functionality... "));
		nova_local_0 = (list2).iterator();
		while (nova_local_0.accessor_hasNext())
		{
			string = nova_local_0.accessor_next();
			if (string.count < 4)
			{
				program.fail(new NovaString("Failed to run foreach loop"));
			}
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkTernary()
	{
		boolean first;
		NovaString second;
		NovaConsole.write(new NovaString("Checking ternary functionality... "));
		first = trueValue() ? new NovaString("hey").equals(new NovaString("hey")) : new NovaString("hey").equals(new NovaString("hey2"));
		if (!first)
		{
			program.fail(new NovaString("Failed first ternary test"));
		}
		second = falseValue() ? new NovaString("one") : new NovaString("two");
		if (!second.equals(new NovaString("two")))
		{
			program.fail(new NovaString("Failed second ternary test"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkElvis()
	{
		NovaString str;
		NovaObject str2;
		NovaString result1;
		NovaObject result2;
		NovaConsole.write(new NovaString("Checking elvis functionality... "));
		str = new NovaString("this isnt null");
		str2 = null;
		result1 = str != null ? str : new NovaString("wtf");
		if (result1.equals(new NovaString("wtf")))
		{
			program.fail(new NovaString("Failed first elvis test"));
		}
		result2 = str2 != null ? str2 : new NovaString("this is null");
		if (!result2.equals(new NovaString("this is null")))
		{
			program.fail(new NovaString("Failed second elvis test"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private boolean trueValue()
	{
		return true;
	}
	
	private boolean falseValue()
	{
		return false;
	}
	
	private void checkRepeat()
	{
		int i;
		int repeatCounter3;
		int times;
		int repeatCounter4;
		int repeatCounter5;
		NovaConsole.write(new NovaString("Checking repeat functionality... "));
		i = 0;
		for (;;)
		{
			if (i == 101)
			{
				break;
			}
			i++;
		}
		if (i != 101)
		{
			program.fail(new NovaString("Vanilla repeat failed"));
		}
		i = 0;
		for (repeatCounter3 = 0; repeatCounter3 < 101; repeatCounter3++)
		{
			i++;
		}
		if (i != 101)
		{
			program.fail(new NovaString("Repeat 101 times failed"));
		}
		i = 0;
		times = 101;
		for (repeatCounter4 = 0; repeatCounter4 < times; repeatCounter4++)
		{
			i++;
		}
		if (i != 101)
		{
			program.fail(new NovaString("Repeat times (").concat(NovaInt.toString((times)).concat(new NovaString(") failed"))));
		}
		i = 0;
		for (repeatCounter5 = 0; repeatCounter5 < times; repeatCounter5++)
		{
			i++;
		}
		if (i != 101)
		{
			program.fail(new NovaString("Repeat fragment failed"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private int named(NovaString s, NovaString arg, Optional<NovaInt> jum_optional, Optional<NovaInt> jdd_optional, Optional<NovaInt> joe_optional)
	{
		int jum = jum_optional == null ? 4 : jum_optional.get();
		int jdd = jdd_optional == null ? 0 : jdd_optional.get();
		int joe = joe_optional == null ? 0 : joe_optional.get();
		return -1;
	}
	
	private int named(NovaString s, NovaString arg, Optional<NovaInt> num_optional, Optional<NovaInt> add_optional)
	{
		int num = num_optional == null ? 4 : num_optional.get();
		int add = add_optional == null ? 0 : add_optional.get();
		return num * arg.count + add;
	}
	
	private void checkNamedArguments()
	{
		int num;
		NovaConsole.write(new NovaString("Checking named arguments... "));
		num = named(new NovaString(""), new NovaString("yo"), Optional.ofNullable(4), null);
		if (num != 8)
		{
			program.fail(new NovaString("Default argument failed. Expected 8, received ").concat(NovaInt.toString((num)).concat(new NovaString(""))));
		}
		num = named(new NovaString(""), new NovaString("heyasdf"), Optional.ofNullable(5), Optional.ofNullable(2));
		if (num != 37)
		{
			program.fail(new NovaString("Named arguments failed. Expeced 37, received ").concat(NovaInt.toString((num)).concat(new NovaString(" first"))));
		}
		num = named(new NovaString(""), new NovaString("heyasdf"), Optional.ofNullable(5), Optional.ofNullable(2));
		if (num != 37)
		{
			program.fail(new NovaString("Named arguments failed. Expeced 37, received ").concat(NovaInt.toString((num)).concat(new NovaString(" second"))));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void checkZipper()
	{
		NovaArray array1;
		NovaArray array2;
		NovaArray zipped;
		void contextArg40;
		NovaConsole.write(new NovaString("Checking zip function... "));
		array1 = generated20();
		array2 = generated21();
		zipped = array1.zip(array2, testLambda40);
		NovaConsole.write(new NovaString("Zipped: ").concat((zipped).toString().concat(new NovaString(" "))));
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private NovaArray generated19()
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
	
	private NovaArray generated20()
	{
		NovaString[] temp;
		temp = new NovaString[4];
		temp[0] = new NovaString("This");
		temp[1] = new NovaString("is");
		temp[2] = new NovaString("a");
		temp[3] = new NovaString("test");
		return new NovaArray(temp, 4);
	}
	
	private NovaArray generated21()
	{
		NovaString[] temp;
		temp = new NovaString[4];
		temp[0] = new NovaString("one");
		temp[1] = new NovaString("two");
		temp[2] = new NovaString("three");
		temp[3] = new NovaString("four");
		return new NovaArray(temp, 4);
	}
	
	private static NovaObject testLambda40(NovaString x, NovaObject y)
	{
		return (x).concat(new NovaString(" ").concat((y).toString().concat(new NovaString(""))));
	}
	
}
