<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<html>
<head>
<title>JSP include with parameters example</title>
</head>
<body>
	<p align="center">My main JSP page</p>
	<jsp:include page="file.jsp">
		<jsp:param name="firstname" value="Sachin" />
		<jsp:param name="middlename" value="Ramesh" />
		<jsp:param name="lastname" value="Tendulkar" />
	</jsp:include>
</body>
</html>
