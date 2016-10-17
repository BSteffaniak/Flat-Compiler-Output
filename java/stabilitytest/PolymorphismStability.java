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
import stabilitytest.PolymorphicSubClass;
import stabilitytest.PolymorphicSuperClass;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;

public class PolymorphismStability extends StabilityTestCase
{
	
	
	
	
	
	public PolymorphismStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		NovaConsole.writeLine(new NovaString("Checking Polymorphism stability..."));
		testCalls();
		testClosure();
		testProperty();
	}
	
	private void testCalls()
	{
		PolymorphicSuperClass obj1;
		PolymorphicSubClass obj2;
		NovaConsole.write(new NovaString("Checking polymorphic method calls... "));
		obj1 = new PolymorphicSuperClass();
		obj2 = new PolymorphicSubClass();
		if (!testSubCall(obj2))
		{
			program.fail(new NovaString("Did not call sub class method"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static boolean testSubCall(PolymorphicSuperClass obj)
	{
		return obj.toString().equals(new NovaString("sub class"));
	}
	
	private void testClosure()
	{
		PolymorphicSuperClass obj;
		NovaString child;
		NovaConsole.write(new NovaString("Checking polymorphic closure method calls... "));
		obj = new PolymorphicSubClass();
		if (!callPolymorphicClosure(obj.toString))
		{
			program.fail(new NovaString("Did not call sub class method as closure"));
		}
		obj.giveBirth();
		child = obj.child.toString().concat(new NovaString("!"));
		if (!callPolymorphicClosure(obj.child.toString))
		{
			program.fail(new NovaString("Did not call sub class method as closure"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private static boolean callPolymorphicClosure(NovaString closure)
	{
		return closure().equals(new NovaString("sub class"));
	}
	
	private void testProperty()
	{
		PolymorphicSuperClass obj1;
		PolymorphicSuperClass obj2;
		NovaConsole.write(new NovaString("Checking polymorphic properties... "));
		obj1 = new PolymorphicSuperClass();
		obj2 = new PolymorphicSubClass();
		if (obj1.myProperty() != 1)
		{
			program.fail(new NovaString("Did not call super polymorphic property accessor correctly"));
		}
		if (obj2.myProperty() != 2)
		{
			program.fail(new NovaString("Did not call sub polymorphic property accessor correctly"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
}
