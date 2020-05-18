<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<title>Insert title here</title>
</head>
<body>
<jsp:useBean id="ob" class="Lab7.Student" scope="request" >
	<jsp:setProperty name="ob" property="sname" />
	<jsp:setProperty name="ob" property="usn" />
	<jsp:setProperty name="ob" property="sem" />
	<jsp:setProperty name="ob" property="course" />
</jsp:useBean>
<jsp:forward page="getProp.jsp" />
</body>
</html>