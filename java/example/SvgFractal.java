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
import nova.web.svg.Svg;
import nova.web.svg.SvgCircle;
import nova.io.File;
import nova.time.Timer;

public class SvgFractal extends NovaObject
{
	
	
	
	
	
	public SvgFractal()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		Svg s;
		double pi2;
		int numVerts;
		double coefficient;
		int numPoints;
		Timer timer;
		DoubleArray points;
		double radius;
		double offset;
		double cx;
		double cy;
		File f;
		int i;
		int n;
		int p;
		s = new Svg();
		pi2 = NovaMath.PI * 2;
		NovaConsole.write(new NovaString("Enter the number of vertices: "));
		numVerts = NovaConsole.readInt();
		NovaConsole.write(new NovaString("Enter the coefficient: "));
		coefficient = NovaConsole.readDouble();
		NovaConsole.write(new NovaString("Enter the number of points: "));
		numPoints = NovaConsole.readInt();
		timer = new Timer().start();
		points = new DoubleArray(numVerts * 2);
		radius = 450;
		offset = pi2 / 12;
		i = (int)0;
		for (; i < (int)numVerts; i++)
		{
			double rad;
			float nova_zero_check26;
			nova_zero_check26 = (numVerts * 1.0);
			if (nova_zero_check26 == 0)
			{
				throw new DivideByZeroException();
			}
			rad = pi2 * (i / nova_zero_check26) + offset;
			points.set(i * 2 + 0, radius * NovaMath.cos(rad) + radius + 10);
			points.set(i * 2 + 1, radius * NovaMath.sin(rad) + radius + 10);
		}
		n = (int)0;
		for (; n < (int)numVerts; n++)
		{
			double x;
			double y;
			SvgCircle circle2;
			x = points.get(n * 2 + 0);
			y = points.get(n * 2 + 1);
			circle2 = new SvgCircle(x, y, 3);
			s.root.children.addChild(circle2);
		}
		cx = radius + 10;
		cy = radius + 10;
		p = (int)0;
		for (; p < (int)numPoints; p++)
		{
			int rand;
			double x;
			double y;
			rand = NovaMath.random(numVerts);
			x = points.get(rand * 2 + 0);
			y = points.get(rand * 2 + 1);
			cx = cx - (cx - x) * coefficient;
			cy = cy - (cy - y) * coefficient;
			if (p > 15)
			{
				SvgCircle circle;
				if ((p + 1) % 1000 == 0)
				{
					NovaConsole.writeLine(new NovaInt(p + 1));
				}
				circle = new SvgCircle(cx, cy, 1);
				s.root.children.addChild(circle);
			}
		}
		f = new File(new NovaString("C:/Users/Braden Steffaniak/svgoutput.html"));
		f.create();
		f.clearContents();
		s.generateHTMLOutput(f);
		timer.stop();
		NovaConsole.write(new NovaString("Done generating ").concat(NovaLong.toString(timer.accessor_duration())));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
