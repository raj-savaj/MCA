package Lab4;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet("/servletuserprefprint")
public class servletuserprefprint extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		Cookie[] cookie=request.getCookies();
		String name="";
		String value;
		PrintWriter out=response.getWriter();
	    out.print("<html><head><title>Get & Post</title></head>");
		out.print("<body><h1>User Preferences in cookies</h1>");
		for(int i=0; i<cookie.length; i++)
		{
			name=cookie[i].getName();
			value=cookie[i].getValue();
			out.print("<p>"+name +": "+"</p>");
			out.print("<p>"+value+"</p>");
		}
		out.print("</body></html>");

	}

}
