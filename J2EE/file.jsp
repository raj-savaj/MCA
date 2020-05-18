<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<title>JSP include with parameters example</title>
</head>
<body>
	<%=request.getParameter("firstname")%><br />
	<%=request.getParameter("middlename")%><br />
	<%=request.getParameter("lastname")%><br />
</body>
</html>
