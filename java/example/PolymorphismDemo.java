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

public class PolymorphismDemo extends NovaObject
{
	
	
	
	
	
	public PolymorphismDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		NovaArray animals;
		Dog dog;
		Spider spider;
		NovaString description;
		animals = new NovaArray(2);
		dog = new Dog();
		spider = new Spider();
		animals.set(0, dog);
		animals.set(1, spider);
		description = getDescriptionOfAnimalWithNumberOfLegs(animals, 8);
		NovaConsole.writeLine(new NovaString("Searched for animal with 8 legs and found: ").concat((description).concat(new NovaString(""))));
		NovaConsole.waitForEnter();
	}
	
	private static NovaString getDescriptionOfAnimalWithNumberOfLegs(NovaArray animals, int numLegs)
	{
		int i;
		i = (int)0;
		for (; i < (int)2; i++)
		{
			if (animals.data[i].getNumLegs() == numLegs)
			{
				return animals.data[i].getDescription();
			}
		}
		return new NovaString("Could not find animal with ").concat(NovaInt.toString((numLegs)).concat(new NovaString(" legs")));
	}
	
	public void init()
	{
	}
	
}
