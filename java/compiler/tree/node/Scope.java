package compiler.tree.node;

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
import compiler.util.Location;
import compiler.tree.node.Listener;
import compiler.tree.node.Node;

public class Scope extends Node
{
	private int id;
	private NovaArray listeners;
	
	
	
	
	
	public Scope()
	{
		init();
	}
	
	public Scope clone(Optional<Node> parent_optional, Optional<Location> location_optional, Optional<Bool> cloneChildren_optional)
	{
		Node parent = parent_optional == null ? null : parent_optional.get();
		Location location = location_optional == null ? Location.INVALID : location_optional.get();
		boolean cloneChildren = cloneChildren_optional == null ? true : cloneChildren_optional.get();
		return null;
	}
	
	public void init()
	{
	}
	
}
