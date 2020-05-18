<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
        <%! String s,ps; %>
        <% s=request.getParameter("u"); %>
        <% ps=request.getParameter("p"); %>
        <% if(s.toString().equals("Raj") && ps.toString().equals("Raj")){
        	out.print("Wel-come Raj");
        }
        else{
        	out.print("Invalid Username and Password");
        }
        %>
</body>
</html>
