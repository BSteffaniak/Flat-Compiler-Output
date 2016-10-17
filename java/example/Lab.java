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
import nova.math.Vector3D;
import nova.math.Matrix;
import nova.datastruct.BinaryTree;
import nova.datastruct.list.LinkedList;
import nova.datastruct.list.List;
import example.Polygon;
import example.Square;

public class Lab extends NovaObject
{
	
	
	
	
	
	public Lab()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		BinaryTree tree;
		int num1;
		int num2;
		NovaString str;
		NovaObject str2;
		NovaArray list;
		IntArray list2;
		void contextArg29;
		NovaArray multi;
		void contextArg30;
		void contextArg31;
		void contextArg32;
		void contextArg33;
		void contextArg34;
		void contextArg35;
		LinkedList linked;
		NovaString x;
		Square sq;
		Vector3D v1;
		Vector3D v2;
		Matrix matrix1;
		Matrix matrix2;
		tree = new BinaryTree(generated11());
		NovaConsole.writeLine(new NovaString("Preorder: ").concat((tree.preorder().join(new NovaString(", "))).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Inorder: ").concat((tree.inorder().join(new NovaString(", "))).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Postorder: ").concat((tree.postorder().join(new NovaString(", "))).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Levelorder: ").concat((tree.levelorder().join(new NovaString(", "))).concat(new NovaString(""))));
		num1 = 4;
		num2 = num1 = 7;
		NovaConsole.writeLine(new NovaString("My nums: ").concat(NovaInt.toString((num1)).concat(new NovaString(", ").concat(NovaInt.toString((num2)).concat(new NovaString(" hey: ").concat((tree.inorder()).toString().concat(new NovaString("!"))))))));
		NovaConsole.writeLine(new NovaString("Result from ternary: ").concat(NovaInt.toString((num1)).concat(new NovaString(" ").concat((num1 < 3 ? new NovaString("<") : new NovaString(">=")).concat(new NovaString(" 3"))))));
		str = new NovaString("this isnt null");
		str2 = null;
		NovaConsole.writeLine(new NovaString("Normal: ").concat((new NovaString("hello").surroundWith(new NovaString("hey "), null)).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Symmetrical: ").concat((new NovaString("hello").surroundWith(new NovaString("hey "), Optional.ofNullable(true))).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Elvis not null: ").concat((str != null ? str : new NovaString("wtf")).concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Elvis null: ").concat((str2 != null ? str2 : new NovaString("this is null")).toString().concat(new NovaString(""))));
		new NovaString("test").substring(0, null);
		NovaConsole.writeLine((new IntRange((int)2, (int)8)).toString().concat(new NovaString(": ").concat(((new IntRange((int)2, (int)8)).join(new NovaString(", "))).concat(new NovaString("")))));
		list = generated12();
		list2 = generated13();
		Async.execute(testLambda29);
		NovaConsole.writeLine(new NovaString("Started async execution"));
		multi = new NovaArray();
		multi.add(generated14());
		multi.add(generated15());
		NovaConsole.writeLine(new NovaString("Multi dimensional array: ").concat((multi).toString().concat(new NovaString(""))));
		NovaConsole.writeLine(Bool.toString(multi.get(0).get(0).chars.contains('z')).capitalize());
		NovaConsole.writeLine(list.map(testLambda30).join(new NovaString(", ")));
		NovaConsole.writeLine(new NovaString("Mapped: ").concat(list.filter(testLambda31).map(testLambda32).join(new NovaString(", "))));
		NovaConsole.writeLine(new NovaString("Mapped backwards: ").concat(list.filter(testLambda33).map(testLambda34).reverse().join(new NovaString(", "))));
		NovaConsole.writeLine(new NovaString("Mapped2: ").concat(list2.map(testLambda35).join(new NovaString(", "))));
		linked = new LinkedList();
		linked.addAll(generated16());
		NovaConsole.writeLine(new NovaString("Linked list backwards: ").concat(linked.reverse().join(new NovaString(", "))));
		NovaConsole.writeLine(new NovaString("Linked list forwards: ").concat(linked.join(new NovaString(", "))));
		x = new NovaString("Hey its a string");
		NovaConsole.writeLine(x);
		takesString(x);
		if (true)
		{
			x = new NovaArray();
			x.add(new NovaString("hey"));
			x.add(new NovaString("its now an array"));
		}
		NovaConsole.writeLine(x);
		sq = new Square(4);
		NovaConsole.writeLine(new NovaDouble(getArea(sq)));
		v1 = new Vector3D(2, 1, 8);
		v2 = new Vector3D(5, 3, 2);
		NovaConsole.writeLine((v1).toString().concat(new NovaString(" X ").concat((v2).toString().concat(new NovaString(" = ").concat((v1.crossProduct(v2)).toString().concat(new NovaString("")))))));
		matrix1 = new Matrix(2, 3);
		matrix1.data.get(0).set(0, 1);
		matrix1.data.get(0).set(1, 2);
		matrix1.data.get(0).set(2, 3);
		matrix1.data.get(1).set(0, 4);
		matrix1.data.get(1).set(1, 5);
		matrix1.data.get(1).set(2, 6);
		matrix2 = new Matrix(3, 2);
		matrix2.data.get(0).set(0, 7);
		matrix2.data.get(0).set(1, 8);
		matrix2.data.get(1).set(0, 9);
		matrix2.data.get(1).set(1, 10);
		matrix2.data.get(2).set(0, 11);
		matrix2.data.get(2).set(1, 12);
		NovaConsole.writeLine(new NovaString("Matrix:\n").concat((matrix1).toString().concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Matrix:\n").concat((matrix1.transpose()).toString().concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Matrix:\n").concat((matrix2).toString().concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Matrix:\n").concat((matrix1.multiply(matrix2)).toString().concat(new NovaString(""))));
		NovaConsole.writeLine(new NovaString("Matrix:\n").concat((matrix1.transpose().add(matrix2)).toString().concat(new NovaString(""))));
		NovaConsole.waitForEnter();
	}
	
	private static void takesString(NovaString s)
	{
		NovaConsole.writeLine(new NovaString("Received ").concat(s));
	}
	
	private static void doSomething(List list)
	{
		void contextArg36;
		list.map(testLambda36).forEach(NovaConsole.writeLine);
	}
	
	private static double getArea(Polygon p)
	{
		return p.calculateArea();
	}
	
	public void init()
	{
	}
	
	private static NovaArray generated11()
	{
		NovaString[] temp;
		temp = new NovaString[9];
		temp[0] = new NovaString("F");
		temp[1] = new NovaString("B");
		temp[2] = new NovaString("A");
		temp[3] = new NovaString("D");
		temp[4] = new NovaString("C");
		temp[5] = new NovaString("E");
		temp[6] = new NovaString("G");
		temp[7] = new NovaString("I");
		temp[8] = new NovaString("H");
		return new NovaArray(temp, 9);
	}
	
	private static NovaArray generated12()
	{
		NovaString[] temp;
		temp = new NovaString[7];
		temp[0] = new NovaString("this");
		temp[1] = new NovaString("is");
		temp[2] = new NovaString("a");
		temp[3] = new NovaString("test");
		temp[4] = new NovaString("to");
		temp[5] = new NovaString("see");
		temp[6] = new NovaString("what shows up");
		return new NovaArray(temp, 7);
	}
	
	private static IntArray generated13()
	{
		int[] temp;
		temp = new int[7];
		temp[0] = 1;
		temp[1] = 2;
		temp[2] = 3;
		temp[3] = 4;
		temp[4] = 5;
		temp[5] = 6;
		temp[6] = 7;
		return new IntArray(temp, 7);
	}
	
	private static void testLambda29()
	{
		NovaConsole.writeLine(new NovaString("Wait a second!"));
		Thread.sleep(1000);
		NovaConsole.writeLine(new NovaString("ok, now what"));
	}
	
	private static NovaArray generated14()
	{
		NovaString[] temp;
		temp = new NovaString[2];
		temp[0] = new NovaString("This is a test");
		temp[1] = new NovaString("index 2");
		return new NovaArray(temp, 2);
	}
	
	private static NovaArray generated15()
	{
		NovaString[] temp;
		temp = new NovaString[2];
		temp[0] = new NovaString("Second dimension yo");
		temp[1] = new NovaString("waddup");
		return new NovaArray(temp, 2);
	}
	
	private static NovaObject testLambda30(NovaString x, int _2, NovaArray _3)
	{
		int something;
		something = 5 * x.count;
		return NovaInt.toString((something)).concat(new NovaString(" ").concat((x).concat(new NovaString(""))));
	}
	
	private static boolean testLambda31(NovaString _1, int _2, NovaArray _3)
	{
		return _1.count >= 4;
	}
	
	private static NovaObject testLambda32(NovaString _1, int _2, NovaArray _3)
	{
		return NovaInt.toString((_2)).concat(new NovaString(": ").concat((_1).concat(new NovaString("?"))));
	}
	
	private static boolean testLambda33(NovaString _1, int _2, NovaArray _3)
	{
		return _1.count >= 4;
	}
	
	private static NovaObject testLambda34(NovaString _1, int _2, NovaArray _3)
	{
		return (_1).concat(new NovaString("?"));
	}
	
	private static NovaObject testLambda35(int _1, int _2, IntArray _3)
	{
		return NovaInt.toString((_1)).concat(new NovaString("!"));
	}
	
	private static NovaArray generated16()
	{
		NovaString[] temp;
		temp = new NovaString[3];
		temp[0] = new NovaString("test");
		temp[1] = new NovaString("test2");
		temp[2] = new NovaString("test3");
		return new NovaArray(temp, 3);
	}
	
	private static NovaObject testLambda36(NovaObject _1, int _2, List _3)
	{
		return (_1).toString().concat(new NovaString("!!!"));
	}
	
}
