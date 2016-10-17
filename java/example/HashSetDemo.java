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
import nova.datastruct.HashSet;
import nova.time.Timer;

public class HashSetDemo extends NovaObject
{
	
	
	
	
	
	public HashSetDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		HashSet set;
		int count;
		Timer timer;
		long stringTime;
		long addTime;
		long nova_zero_check2;
		long nova_zero_check3;
		long nova_zero_check4;
		long nova_zero_check5;
		long nova_zero_check6;
		long nova_zero_check7;
		long nova_zero_check8;
		long nova_zero_check9;
		long getTime;
		long nova_zero_check10;
		long nova_zero_check11;
		long nova_zero_check12;
		long nova_zero_check13;
		long nova_zero_check14;
		long nova_zero_check15;
		long nova_zero_check16;
		long nova_zero_check17;
		long newStringTime;
		long nova_zero_check18;
		long nova_zero_check19;
		long nova_zero_check20;
		long nova_zero_check21;
		long nova_zero_check22;
		long nova_zero_check23;
		long nova_zero_check24;
		long nova_zero_check25;
		int i;
		int i;
		int i;
		int i;
		set = new HashSet();
		set.add(new NovaString("TEseting"));
		NovaConsole.writeLine(set);
		NovaConsole.writeLine(new NovaString("Contains TEset? ").concat(Bool.toString((set.contains(new NovaString("TEset")))).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Contains TEseting? ").concat(Bool.toString((set.contains(new NovaString("TEseting")))).concat(new NovaString(""))));
		NovaConsole.writeLine(set);
		NovaConsole.writeLine(new NovaString("Benchmarking"));
		count = 50000;
		timer = new Timer().start();
		i = (int)0;
		for (; i < (int)count; i++)
		{
			new NovaString("my string").concat(NovaInt.toString((i)).concat(new NovaString("")));
		}
		stringTime = timer.stop().accessor_duration();
		NovaConsole.writeLine(new NovaString("Took ").concat(NovaLong.toString((stringTime)).concat(new NovaString("ms to create ").concat(NovaInt.toString((count)).concat(new NovaString(" strings"))))));
		i = (int)0;
		for (; i < (int)50000; i++)
		{
			set.add(new NovaString("my string").concat(NovaInt.toString((i)).concat(new NovaString(""))));
		}
		addTime = timer.stop().accessor_duration();
		nova_zero_check2 = stringTime;
		if (nova_zero_check2 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check3 = nova_zero_check2;
		if (nova_zero_check3 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check4 = nova_zero_check3;
		if (nova_zero_check4 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check5 = nova_zero_check4;
		if (nova_zero_check5 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check6 = nova_zero_check5;
		if (nova_zero_check6 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check7 = nova_zero_check6;
		if (nova_zero_check7 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check8 = nova_zero_check7;
		if (nova_zero_check8 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check9 = nova_zero_check8;
		if (nova_zero_check9 == 0)
		{
			throw new DivideByZeroException();
		}
		NovaConsole.writeLine(new NovaString("Took ").concat(NovaLong.toString((addTime)).concat(new NovaString("ms to call add ").concat(NovaInt.toString((count)).concat(new NovaString(" times ").concat(NovaLong.toString(((addTime - stringTime) * 100 / nova_zero_check9)).concat(new NovaString("% overhead"))))))));
		timer.start();
		i = (int)0;
		for (; i < (int)count; i++)
		{
			set.get(new NovaString("my string").concat(NovaInt.toString((i)).concat(new NovaString(""))));
		}
		getTime = timer.stop().accessor_duration();
		nova_zero_check10 = stringTime;
		if (nova_zero_check10 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check11 = nova_zero_check10;
		if (nova_zero_check11 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check12 = nova_zero_check11;
		if (nova_zero_check12 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check13 = nova_zero_check12;
		if (nova_zero_check13 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check14 = nova_zero_check13;
		if (nova_zero_check14 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check15 = nova_zero_check14;
		if (nova_zero_check15 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check16 = nova_zero_check15;
		if (nova_zero_check16 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check17 = nova_zero_check16;
		if (nova_zero_check17 == 0)
		{
			throw new DivideByZeroException();
		}
		NovaConsole.writeLine(new NovaString("Took ").concat(NovaLong.toString((getTime)).concat(new NovaString("ms to call get ").concat(NovaInt.toString((count)).concat(new NovaString(" times ").concat(NovaLong.toString(((getTime - stringTime) * 100 / nova_zero_check17)).concat(new NovaString("% overhead"))))))));
		timer.start();
		i = (int)0;
		for (; i < (int)count; i++)
		{
			new NovaString("my string").concat(NovaInt.toString((i)).concat(new NovaString("")));
		}
		newStringTime = timer.stop().accessor_duration();
		nova_zero_check18 = stringTime;
		if (nova_zero_check18 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check19 = nova_zero_check18;
		if (nova_zero_check19 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check20 = nova_zero_check19;
		if (nova_zero_check20 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check21 = nova_zero_check20;
		if (nova_zero_check21 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check22 = nova_zero_check21;
		if (nova_zero_check22 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check23 = nova_zero_check22;
		if (nova_zero_check23 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check24 = nova_zero_check23;
		if (nova_zero_check24 == 0)
		{
			throw new DivideByZeroException();
		}
		nova_zero_check25 = nova_zero_check24;
		if (nova_zero_check25 == 0)
		{
			throw new DivideByZeroException();
		}
		NovaConsole.writeLine(new NovaString("Took ").concat(NovaLong.toString((newStringTime)).concat(new NovaString("ms to create ").concat(NovaInt.toString((count)).concat(new NovaString(" strings ").concat(NovaLong.toString(((newStringTime - stringTime) * 100 / nova_zero_check25)).concat(new NovaString("% overhead"))))))));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
