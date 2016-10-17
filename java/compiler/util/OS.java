package compiler.util;

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

public class OS extends NovaObject
{
	
	
	
	public static byte OS;
	public static byte WINDOWS;
	public static byte MACOSX;
	public static byte LINUX;
	public static NovaString OUTPUT_EXTENSION;
	public static NovaString DYNAMIC_LIB_EXT;
	
	
	public OS()
	{
		init();
	}
	
	public static boolean accessor_isWindows()
	{
		return OS == WINDOWS;
	}
	
	private boolean mutator_isWindows()
	{
	}
	
	public static boolean accessor_isMacOsx()
	{
		return OS == MACOSX;
	}
	
	private boolean mutator_isMacOsx()
	{
	}
	
	public static boolean accessor_isLinux()
	{
		return OS == LINUX;
	}
	
	private boolean mutator_isLinux()
	{
	}
	
	public void init()
	{
	}
	
}
