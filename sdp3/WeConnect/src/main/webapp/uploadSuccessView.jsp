<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html xmlns:th="http://www.thymeleaf.org">
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	WElcome
	<c:forEach items="${posts }" var="post">
	
		<img alt="" src="data:image/*;base64,${post.image}"/>
	
	</c:forEach>

	


</body>
</html>