package Lab2;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/Loginservlet")
public class Loginservlet extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		out.print("<html><head><title>Login</title></head>");
		out.print("<body><p> UserName is : </p>");
		out.print(request.getParameter("t1"));
		out.print("<p> Password is : </p>");
		out.print(request.getParameter("t2"));
		out.print("</body></html>");

	}

}
