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
import nova.io.File;

public class FileTest extends NovaObject
{
	
	
	
	
	
	public FileTest()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		File f;
		f = new File(new NovaString("C:/Users/Braden Steffaniak/test3.txt"));
		if (f.accessor_exists())
		{
			NovaString data;
			NovaConsole.writeLine(new NovaString("Your file exists!"));
			f.writeLine(new NovaString("Entering data.."));
			f.writeLine(new NovaString("asdfasdf thing."));
			f.reopen();
			data = f.readAllContents();
			NovaConsole.writeLine(data);
		}
		else
		{
			NovaConsole.writeLine(new NovaString("Your file does not exist.."));
		}
		f.close();
		NovaConsole.writeLine(new NovaString("Press enter to exit..."));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
