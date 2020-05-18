package Lab8;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/forwardservlet")
public class forwardservlet extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 response.setContentType("text/html");
		 PrintWriter out=response.getWriter();
		 out.print("<html><body><p>Hi Welcome to Servlet 1.</p>");
		 out.print("</body></html>");
		 RequestDispatcher dis=request.getRequestDispatcher("/targetservlet");
		 dis.forward(request, response); 
	}


}
