package Lab9;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


@WebServlet("/SessionCounter")
public class SessionCounter extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		PrintWriter out=response.getWriter();
		HttpSession  sess=request.getSession(true);
		Integer count=(Integer) sess.getAttribute("count");
		if(count==null)
		{
			count=new Integer(1);
		}
		else
		{
			count=new Integer(count.intValue()+1);
			
		}
		sess.setAttribute("count", count);
		out.println("<html><body>");
		out.println("YouVisited:"+count+""+((count.intValue()==1)?"Time":"Times"));
		out.println("</body></html>");

	}


}
