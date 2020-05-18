<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%!int i;%>
	ODD Numbers
	<br />
	<%
		for (i = 1; i <= 20; i++) {
			if (i % 2 != 0) {
				out.print(i+" ");
			}
		}
	%>
	<br />EVEN Numbers
	<br />
	<%
		for (i = 1; i <= 20; i++) {
			if (i % 2 == 0) {
				out.print(i+" ");
			}
		}
	%>
</body>
</html>
