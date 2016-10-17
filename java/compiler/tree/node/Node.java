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
import compiler.error.UnimplementedOperationException;
import compiler.tree.node.annotation.Annotatable;
import compiler.tree.node.annotation.Annotation;
import compiler.util.Location;
import compiler.tree.node.Scope;

public class Node extends NovaObject implements Annotatable
{
	
	public Location location;
	public Node parent;
	public NovaArray children;
	public NovaArray annotations;
	
	
	
	
	public Node(Node parent, Location location)
	{
		init(parent, location);
	}
	
	public Node accessor_parent()
	{
		return parent;
	}
	
	public Node mutator_parent(Node value)
	{
		if (accessor_parent() != value)
		{
			detach();
			mutator_parent(value);
		}
		return value;
	}
	
	public Scope accessor_scope()
	{
		return null;
	}
	
	public Scope mutator_scope(Scope value)
	{
		throw new UnimplementedOperationException(new NovaString("This Node does not support Scopes"));
		return value;
	}
	
	public boolean accessor_isDecoding()
	{
		return accessor_parent() == null || !accessor_parent().containsChild(this, null);
	}
	
	private boolean mutator_isDecoding()
	{
	}
	
	public boolean accessor_containsScope()
	{
		return accessor_scope() != null;
	}
	
	private boolean mutator_containsScope()
	{
	}
	
	public void init(Node parent, Location location)
	{
		children = NovaArray(4);
		this.mutator_parent(parent);
		this.location = location;
	}
	
	public void addAnnotation(Annotation annotation)
	{
		annotations = annotations != null ? annotations : new NovaArray();
		annotations.add(annotation);
		annotation.mutator_parent(this);
	}
	
	public void detach()
	{
		Node from;
		if (accessor_isDecoding())
		{
			return;
		}
		from = accessor_parent();
		if (accessor_parent().children.count > 0 && !accessor_parent().containsChild(this, null) && accessor_parent().accessor_containsScope())
		{
			from = accessor_parent().accessor_scope();
		}
		detach(from);
	}
	
	private void detach(Node fromNode)
	{
		fromNode.children.remove(this);
		mutator_parent(null);
		onRemoved(fromNode);
	}
	
	public void onRemoved(Node parent)
	{
	}
	
	public boolean containsChild(Node child, Optional<Bool> recursive_optional)
	{
		boolean recursive = recursive_optional == null ? false : recursive_optional.get();
		if (children.contains(child))
		{
			return true;
		}
		else if (recursive)
		{
			void contextArg23;
			children.any(testLambda23);
		}
		return false;
	}
	
	public void onAdded(Node parent)
	{
	}
	
	
	private static boolean testLambda23(Node _1)
	{
		return _1.containsChild(child, Optional.ofNullable(true));
	}
	
}
