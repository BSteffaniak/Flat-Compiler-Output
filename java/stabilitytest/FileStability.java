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
import nova.io.File;
import nova.time.Time;
import stabilitytest.StabilityTest;
import stabilitytest.StabilityTestCase;

public class FileStability extends StabilityTestCase
{
	
	
	private static NovaString inputString;
	private static int lines;
	
	
	
	public FileStability(StabilityTest program)
	{
		init(program);
	}
	
	public void init(StabilityTest program)
	{
		init(program);
	}
	
	public void test()
	{
		NovaConsole.writeLine(new NovaString("Checking File IO..."));
		inputString = new NovaString("This is test input...");
		lines = 100;
		try
		{
			File f;
			f = new File(new NovaString("temp").concat(NovaLong.toString(Time.accessor_currentTimeMillis())));
			createFile(f);
			writeToFile(f);
			readFromFile(f);
			deleteFile(f);
		}
		catch (Exception e)
		{
			program.fail(new NovaString("Failed; Exception thrown"));
		}
		finally
		{
		}
	}
	
	private void createFile(File f)
	{
		NovaConsole.write(new NovaString("Creating file... "));
		if (!f.create())
		{
			program.fail();
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void writeToFile(File f)
	{
		int i;
		NovaConsole.write(new NovaString("Writing ").concat(NovaInt.toString((lines)).concat(new NovaString(" lines of data to file... "))));
		i = (int)0;
		for (; i < (int)lines; i++)
		{
			f.writeLine(inputString);
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void readFromFile(File f)
	{
		int times;
		NovaString line;
		NovaConsole.write(new NovaString("Reading lines from file... "));
		f.reopen();
		times = 0;
		line = f.readLine();
		while (line != null)
		{
			if (!line.equals(inputString))
			{
				program.fail();
			}
			line = f.readLine();
			times++;
		}
		if (times != lines)
		{
			program.fail(new NovaString("Failed; only read ").concat(NovaInt.toString(times).concat(new NovaString("/").concat(NovaByte.toString(100).concat(new NovaString(" lines"))))));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
	private void deleteFile(File f)
	{
		NovaConsole.write(new NovaString("Deleting file... "));
		if (!f.delete())
		{
			program.fail(new NovaString("Failed to delete file"));
		}
		NovaConsole.writeLine(new NovaString("OK"));
	}
	
}
