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

public class ClassWithProperties extends NovaObject
{
	private int privateProp1;
	private int privateProp2;
	
	
	
	
	
	public ClassWithProperties()
	{
		init();
	}
	
	public int accessor_prop1()
	{
		return privateProp1;
	}
	
	public int mutator_prop1(int value)
	{
		privateProp1 = value;
		return value;
	}
	
	public int accessor_prop2()
	{
		return privateProp2;
	}
	
	public int mutator_prop2(int value)
	{
		privateProp2 = value;
		return value;
	}
	
	public void init()
	{
	}
	
}
