package Lab3;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/GetAndPostDemo")
public class GetAndPostDemo extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		out.print("<html><head><title>Get & Post </title></head>");
		out.print("<body><p> You selected GET method</p>");
		out.print("Value entered by the user is :"+request.getParameter("t1"));
		out.print("</body></html>");

	}


	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		out.print("<html><head><title>Get & Post</title></head>");
		out.print("<body><p> U selected POST method</p>");
		out.print("Value entered by the user is :"+request.getParameter("t2"));
		out.print("</body></html>");
	}

}
