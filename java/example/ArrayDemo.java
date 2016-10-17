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
import example.Animal;
import example.Dog;
import example.Spider;

public class ArrayDemo extends NovaObject
{
	
	
	
	
	
	public ArrayDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		char c;
		c = 'y';
		while (c == 'y' || c == 'Y')
		{
			NovaArray list;
			Animal animal;
			int i;
			int i2;
			int i3;
			list = new NovaArray();
			list.add(new Dog());
			list.add(new Dog());
			list.add(new Spider());
			list.add(new Dog());
			list.add(new Animal());
			list.add(new Spider());
			i = (int)0;
			for (; i < (int)list.count; i++)
			{
				NovaConsole.writeLine(new NovaString("Contains: ").concat(list.get(i).toString()));
			}
			animal = list.remove(2);
			NovaConsole.writeLine(new NovaString("--------- Removed: ").concat(animal.toString().concat(new NovaString(" ----------"))));
			i2 = (int)0;
			for (; i2 < (int)list.count; i2++)
			{
				NovaConsole.writeLine(new NovaString("Contains: ").concat(list.get(i2).toString()));
			}
			list.add(1, new Spider());
			NovaConsole.writeLine(new NovaString("--------- Added a new spider at index 1 ----------"));
			i3 = (int)0;
			for (; i3 < (int)list.count; i3++)
			{
				NovaConsole.writeLine(new NovaString("Contains: ").concat(list.get(i3).toString()));
			}
			NovaConsole.write(new NovaString("Run again? (Y/N)"));
			c = NovaConsole.readChar();
		}
		NovaConsole.writeLine(new NovaString("\nFinished"));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
