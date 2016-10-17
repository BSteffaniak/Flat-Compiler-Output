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
import nova.time.Timer;
import stabilitytest.AssignmentStability;
import stabilitytest.ClosureStability;
import stabilitytest.ExceptionStability;
import stabilitytest.LambdaStability;
import stabilitytest.PolymorphismStability;
import stabilitytest.StabilityTestCase;
import stabilitytest.SyntaxStability;
import stabilitytest.ToStringStability;
import stabilitytest.UnstableException;

public class StabilityTest extends StabilityTestCase
{
	
	
	
	
	
	public StabilityTest(StabilityTest program)
	{
		init(program);
	}
	
	public static void main(NovaArray args)
	{
		StabilityTest n;
		StabilityTest test;
		Timer timer;
		n = null;
		test = new StabilityTest(n);
		timer = new Timer().start();
		test.test();
		timer.stop();
		NovaConsole.writeLine(new NovaString("Took ").concat(NovaLong.toString(timer.accessor_duration()).concat(new NovaString("ms"))));
		NovaConsole.waitForEnter();
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		try
		{
			new ExceptionStability(this).test();
			new SyntaxStability(this).test();
			new ClosureStability(this).test();
			new PolymorphismStability(this).test();
			new LambdaStability(this).test();
			new ToStringStability(this).test();
			new AssignmentStability(this).test();
			NovaConsole.writeLine(new NovaString("All OK"));
		}
		catch (UnstableException e)
		{
			NovaConsole.writeLine(new NovaString("Unstable exception thrown: ").concat(e.message));
		}
		finally
		{
		}
	}
	
	public void fail()
	{
		fail(new NovaString("Failed"));
	}
	
	public void fail(NovaString message)
	{
		throw new UnstableException(message);
	}
	
}
