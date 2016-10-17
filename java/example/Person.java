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

public class Person extends NovaObject
{
	
	public int age;
	public NovaString name;
	
	
	
	
	public Person(NovaString name, int age)
	{
		init(name, age);
	}
	
	public void init(NovaString name, int age)
	{
		this.name = name;
		this.age = age;
	}
	
	public void sayHello()
	{
		NovaConsole.writeLine(new NovaString("Hello from ").concat(name.concat(new NovaString(" the Person"))));
	}
	
}
