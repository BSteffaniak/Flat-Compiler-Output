package example.database;

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
import nova.database.DBConnector;
import nova.database.ResultSet;

public class DatabaseDemo extends NovaObject
{
	
	
	
	
	
	public DatabaseDemo()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		DBConnector connection;
		ResultSet result;
		int id;
		int row;
		connection = connect();
		result = connection.query(new NovaString("select * from market"));
		row = (int)0;
		for (; row < (int)result.accessor_numRows(); row++)
		{
			int col;
			NovaConsole.write(new NovaString("Found (").concat(NovaInt.toString((row)).concat(new NovaString("): ").concat((result.rows.get(row).get(0)).toString().concat(new NovaString(""))))));
			col = (int)1;
			for (; col < (int)result.numCols; col++)
			{
				NovaConsole.write(new NovaString(", ").concat(result.rows.get(row).get(col).toString()));
			}
			NovaConsole.writeLine(new NovaString(""));
		}
		id = NovaInt.parseInt(result.rows.get(result.accessor_numRows() - 1).get(0)) + 1;
		connection.query(new NovaString("insert into market values(").concat(NovaInt.toString((id)).concat(new NovaString(", 6, 634, 3);"))));
		close(connection);
		NovaConsole.waitForEnter();
	}
	
	private static DBConnector connect()
	{
		DBConnector connection;
		NovaString error;
		NovaConsole.writeLine(new NovaString("Connecting..."));
		connection = new DBConnector();
		connection.connect(new NovaString("localhost"), new NovaString("root"), new NovaString("server"), new NovaString("test"));
		error = connection.error;
		if (error.count > 0)
		{
			NovaConsole.writeLine(new NovaString("Error: ").concat(error));
		}
		else
		{
			NovaConsole.writeLine(new NovaString("Connected."));
		}
		return connection;
	}
	
	private static void close(DBConnector connection)
	{
		NovaConsole.writeLine(new NovaString("Closing..."));
		connection.close();
		NovaConsole.writeLine(new NovaString("Closed"));
	}
	
	public void init()
	{
	}
	
}
