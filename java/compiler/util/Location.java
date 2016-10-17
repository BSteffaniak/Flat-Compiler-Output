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
import nova.datastruct.Bounds;

public class Location extends NovaObject
{
	
	public int lineNumber;
	public int offset;
	public Bounds bounds;
	
	
	public static Location INVALID;
	
	
	public Location()
	{
		init();
	}
	
	public Location(Location loc)
	{
		init(loc);
	}
	
	public Location(int lineNumber, int offset, int start, int end)
	{
		init(lineNumber, offset, start, end);
	}
	
	public void init()
	{
		bounds = new Bounds(0, 0);
	}
	
	public void init(Location loc)
	{
		init(0, loc.offset, loc.bounds.start, loc.bounds.end);
	}
	
	public void init(int lineNumber, int offset, int start, int end)
	{
		init();
		this.offset = offset;
		this.lineNumber = lineNumber;
		setBounds(start, end);
	}
	
	public void setLineNumber(int lineNumber)
	{
		this.lineNumber = lineNumber;
	}
	
	public int getStart()
	{
		return bounds.start;
	}
	
	public int getEnd()
	{
		return bounds.end;
	}
	
	public void setOffset(int offset)
	{
		this.offset = offset;
	}
	
	public void addOffset(int amount)
	{
		offset += amount;
	}
	
	public void subtractOffset(int amount)
	{
		offset -= amount;
	}
	
	public void setBounds(Bounds bounds)
	{
		this.bounds = bounds;
	}
	
	public void setBounds(int start, int end)
	{
		bounds.start = start;
		bounds.end = end;
	}
	
	public void addBounds(int amount)
	{
		bounds.start += amount;
		bounds.end += amount;
	}
	
	public void moveBounds(int startAmount, int endAmount)
	{
		bounds.start += startAmount;
		bounds.end += endAmount;
	}
	
	public void subtractBounds(int startAmount, int endAmount)
	{
		bounds.start -= startAmount;
		bounds.end -= endAmount;
	}
	
	public void subtractBounds(int amount)
	{
		bounds.start -= amount;
		bounds.end -= amount;
	}
	
	public void addBounds(int startAmount, int endAmount)
	{
		bounds.start += startAmount;
		bounds.end += endAmount;
	}
	
	public boolean isValid()
	{
		return lineNumber > 0;
	}
	
	public Location asNew()
	{
		return new Location(this);
	}
	
	public NovaString toString()
	{
		return new NovaString("Line ").concat(NovaInt.toString((lineNumber)).concat(new NovaString(" ").concat((bounds).toString().concat(new NovaString("")))));
	}
	
}
