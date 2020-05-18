<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<body>
<jsp:useBean id="ob" class="Lab7.Student" scope="request" />
Name : <jsp:getProperty name="ob" property="sname" /><br />
No : <jsp:getProperty name="ob" property="usn"  /><br />
Sem : <jsp:getProperty name="ob" property="sem" /><br />
Course : <jsp:getProperty name="ob" property="course"  /><br />
</body>
</html>
