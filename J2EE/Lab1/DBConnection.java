package Lab1;

import java.sql.Connection;
import java.sql.DriverManager;

public class DBConnection {
	Connection conn = null;

	Connection getDBConnection() {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver loaded");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/studentdb", "root", "");
			System.out.println("Database connected");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
	}
}
