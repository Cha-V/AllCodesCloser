<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>


<!-- image
sender id
receiver id
image
description

 -->
<body>
	<form action="uploadFile" method="post" enctype="multipart/form-data">
	To:  <input type="text" name="to"> 
		<label for="img">Upload image:</label>
  		<input type="file" id="img" name="file" multiple>
  		 Description : <input type="text" name="description"> 
  		Post : <input type="submit">
	</form>
	
	
	
</body>
</html>