package compiler;

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
import compiler.util.FileUtils;

public class Compiler extends NovaObject
{
	
	
	
	public static boolean DEBUG;
	
	
	public Compiler()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		Compiler c;
		c = new Compiler();
		c.compile(null);
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
	public void compile(NovaArray args)
	{
		NovaString directory;
		directory = FileUtils.getWorkingDirectoryPath().concat(new NovaString("/"));
		if (DEBUG)
		{
			testClasses();
			args = generated10();
			NovaConsole.writeLine(new NovaString("Args: ").concat((args).toString().concat(new NovaString(""))));
		}
	}
	
	private void testClasses()
	{
	}
	
	private NovaArray generated10()
	{
		NovaString[] temp;
		temp = new NovaString[10];
		temp[0] = new NovaString("../Compiler");
		temp[1] = new NovaString("example");
		temp[2] = new NovaString("stabilitytest");
		temp[3] = new NovaString("-formatc");
		temp[4] = null ? new NovaString("-v") : new NovaString("");
		temp[5] = new NovaString("-keepc");
		temp[6] = new NovaString("-single-thread");
		temp[7] = new NovaString("-main");
		temp[8] = new NovaString("compiler/Compiler");
		temp[9] = new NovaString("-no-optimize");
		return new NovaArray(temp, 10);
	}
	
}
