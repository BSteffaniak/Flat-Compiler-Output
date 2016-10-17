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
import nova.datastruct.HashMap;
import nova.datastruct.Pair;

public class HashMapDemo extends NovaObject
{
	
	
	
	
	
	public HashMapDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		HashMap words;
		void contextArg24;
		void contextArg25;
		void contextArg26;
		void contextArg27;
		void contextArg28;
		words = new HashMap();
		words.put(new NovaString("test"), new NovaString("is test"));
		words.put(new NovaString("test2"), new NovaString("is test2"));
		words.put(new NovaString("test3hey"), new NovaString("is test3hey"));
		words.put(new NovaString("test4hey"), new NovaString("is test4hey"));
		words.put(new NovaString("test5"), new NovaString("is test5"));
		words.forEach(testLambda24);
		NovaConsole.writeLine(new NovaString("\nRemoving test2: ").concat((words.remove(new NovaString("test2"))).toString().concat(new NovaString("\n"))));
		words.forEach(testLambda25);
		NovaConsole.writeLine(new NovaString("\n").concat(words.filter(testLambda26).map(testLambda27).join(new NovaString(", ")).concat(new NovaString("\n"))));
		words.forEach(testLambda28);
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
	private static void testLambda24(Pair _1, int _2, HashMap _3)
	{
		NovaConsole.writeLine(new NovaString("Contains: ").concat((_1).toString().concat(new NovaString(""))));
	}
	
	private static void testLambda25(Pair _1, int _2, HashMap _3)
	{
		NovaConsole.writeLine(new NovaString("Contains: ").concat((_1).toString().concat(new NovaString(""))));
	}
	
	private static boolean testLambda26(Pair _1, int _2, HashMap _3)
	{
		return ((NovaString)_1.key).contains(new NovaString("hey"));
	}
	
	private static NovaObject testLambda27(Pair _1, int _2, NovaArray _3)
	{
		return _1.value;
	}
	
	private static void testLambda28(Pair _1, int _2, HashMap _3)
	{
		NovaConsole.writeLine(new NovaString("Contains: ").concat((_1).toString().concat(new NovaString(""))));
	}
	
}
