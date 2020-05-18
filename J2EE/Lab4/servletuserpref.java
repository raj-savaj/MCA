package Lab4;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet("/servletuserpref")
public class servletuserpref extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		response.setContentType("text/html");
		String firstName = request.getParameter("t1");
	    String lastName = request.getParameter("t2");
	    String emailAddress = request.getParameter("t3");
	    Cookie c1 = new Cookie("firstName", firstName);
	    response.addCookie(c1);
	    Cookie c2 = new Cookie("lastName", lastName);
	    response.addCookie(c2);
	    Cookie c3 = new Cookie("emailAddress", emailAddress);
	    response.addCookie(c3);
	    response.sendRedirect("servletuserprefprint");

	}
}
