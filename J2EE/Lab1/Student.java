package Lab1;

import java.sql.*;
import java.util.Scanner;

public class Student {
	Connection conn = null;

	Student() {
		DBConnection c = new DBConnection();
		conn = c.getDBConnection();
	}

	void insert() {
		String id;
		String name;
		int m1;
		int m2;
		int m3;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Student ID ");
		id = sc.nextLine();
		System.out.println("Enter Student Name ");
		name = sc.nextLine();
		System.out.println("Enter M1 ");
		m1 = sc.nextInt();
		System.out.println("Enter M2 ");
		m2 = sc.nextInt();
		System.out.println("Enter M3 ");
		m3 = sc.nextInt();
		int totalmarks = m1 + m2 + m3;
		String result = "", grade = "";
		if (totalmarks >= 240) {
			result = "PASS";
			grade = "Distinction";
		}
		if (totalmarks >= 180 && totalmarks < 240) {
			result = "PASS";
			grade = "First Class";
		}
		if (totalmarks >= 150 && totalmarks < 180) {
			result = "PASS";
			grade = "Second Class";
		}
		if (totalmarks >= 105 && totalmarks < 150) {
			result = "PASS";
			grade = "Third Class";
		}
		if (totalmarks < 105) {
			result = "FAIL";
			grade = "No Grade";
		}
		PreparedStatement pstmt;
		int count = 0;
		try {
			pstmt = conn.prepareStatement("insert into student values(?,?,?,?,?,?,?)");
			pstmt.setString(1, id);
			pstmt.setString(2, name);
			pstmt.setInt(3, m1);
			pstmt.setInt(4, m2);
			pstmt.setInt(5, m3);
			pstmt.setString(6, result);
			pstmt.setString(7, grade);
			count = pstmt.executeUpdate();
			if (count > 0)
				System.out.println("Inserted Successfully");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	void displayAll() {
		PreparedStatement pstmt;
		try {
			pstmt = conn.prepareStatement("select * from student");
			ResultSet rs = pstmt.executeQuery();
			while (rs.next()) {
				System.out.println("ID= " + rs.getString(1));
				System.out.println("Name= " + rs.getString(2));
				System.out.println("M1= " + rs.getInt(3));
				System.out.println("M2= " + rs.getInt(4));
				System.out.println("M3= " + rs.getInt(5));
				System.out.println("Result= " + rs.getString(6));
				System.out.println("Grade= " + rs.getString(7));
				System.out.println();
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	void deleteById() {
		PreparedStatement pstmt;
		int count = 0;
		String id1;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Student ID ");
		id1 = sc.nextLine();
		try {
			pstmt = conn.prepareStatement("delete from student where id=?");
			pstmt.setString(1, id1);
			count = pstmt.executeUpdate();
			if (count > 0)
				System.out.println("Deleted Successfully");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	void updateById() {
		PreparedStatement pstmt;
		int count = 0;
		String id1;
		String name1;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Student ID ");
		id1 = sc.nextLine();
		System.out.println("Enter Student Name ");
		name1 = sc.nextLine();
		try {
			pstmt = conn.prepareStatement("update student set name=? where id=?");
			pstmt.setString(1, name1);
			pstmt.setString(2, id1);
			count = pstmt.executeUpdate();
			if (count > 0)
				System.out.println("Updated Successfully");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	void displayByResult() {
		PreparedStatement pstmt;
		String criteria;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Criteria ");
		criteria = sc.nextLine();
		try {
			pstmt = conn.prepareStatement("select * from student where result=?");
			pstmt.setString(1, criteria);
			ResultSet rs = pstmt.executeQuery();
			while (rs.next()) {
				System.out.println("ID= " + rs.getString(1));
				System.out.println("Name= " + rs.getString(2));
				System.out.println("M1= " + rs.getInt(3));
				System.out.println("M2= " + rs.getInt(4));
				System.out.println("M3= " + rs.getInt(5));
				System.out.println("Result= " + rs.getString(6));
				System.out.println("Grade= " + rs.getString(7));
				System.out.println();
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
