<%@page import="com.klu.demo.model.Citizen"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<html>
<head>
  <meta charset="utf-8">
  <meta content="width=device-width, initial-scale=1.0" name="viewport">

  <title>We Connect</title>
  <meta content="" name="description">
  <meta content="" name="keywords">

  <!-- Favicons -->
  <link href="assets/img/favicon.png" rel="icon">
  <link href="assets/img/apple-touch-icon.png" rel="apple-touch-icon">

  <!-- Google Fonts -->
  <link href="https://fonts.gstatic.com" rel="preconnect">
  <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,300i,400,400i,600,600i,700,700i|Nunito:300,300i,400,400i,600,600i,700,700i|Poppins:300,300i,400,400i,500,500i,600,600i,700,700i" rel="stylesheet">

  <!-- Vendor CSS Files -->
  <link href="assets/vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <link href="assets/vendor/bootstrap-icons/bootstrap-icons.css" rel="stylesheet">
  <link href="assets/vendor/boxicons/css/boxicons.min.css" rel="stylesheet">
  <link href="assets/vendor/quill/quill.snow.css" rel="stylesheet">
  <link href="assets/vendor/quill/quill.bubble.css" rel="stylesheet">
  <link href="assets/vendor/remixicon/remixicon.css" rel="stylesheet">
  <link href="assets/vendor/simple-datatables/style.css" rel="stylesheet">

  <!-- Template Main CSS File -->
  <link href="assets/css/style.css" rel="stylesheet">

  <!-- =======================================================
  * Template Name: NiceAdmin - v2.2.0
  * Template URL: https://bootstrapmade.com/nice-admin-bootstrap-admin-html-template/
  * Author: BootstrapMade.com
  * License: https://bootstrapmade.com/license/
  ======================================================== -->
</head>

<body>
<%	
if(session.getAttribute("citizen").equals(null))
response.sendRedirect("login");
Citizen c=(Citizen) session.getAttribute("citizen");
%>

  <!-- ======= Header ======= -->
  <header id="header" class="header fixed-top d-flex align-items-center">

    <div class="d-flex align-items-center justify-content-between">
      <a href="afterLogin" class="logo d-flex align-items-center">
        <img src="assets/img/logo.png" alt="">
        <span class="d-none d-lg-block">We Connect</span>
      </a>
      <i class="bi bi-list toggle-sidebar-btn"></i>
    </div><!-- End Logo -->

    <div class="search-bar">
      <form class="search-form d-flex align-items-center" method="POST" action="search">
        <input type="text" name="s" placeholder="Search" title="Enter search keyword">
        <button type="submit" title="Search"><i class="bi bi-search"></i></button>
      </form>
    </div><!-- End Search Bar -->

    <nav class="header-nav ms-auto">
      <ul class="d-flex align-items-center">

        <li class="nav-item d-block d-lg-none">
          <a class="nav-link nav-icon search-bar-toggle " href="#">
            <i class="bi bi-search"></i>
          </a>
        </li><!-- End Search Icon-->

        <li class="nav-item dropdown">

          <a class="nav-link nav-icon" href="#" data-bs-toggle="dropdown">
            <i class="bi bi-bell"></i>
            <span class="badge bg-primary badge-number">*</span>
          </a><!-- End Notification Icon -->

          <ul class="dropdown-menu dropdown-menu-end dropdown-menu-arrow notifications">
            
			<c:forEach begin="0" end="1" var="notis" items="${noti}" varStatus="loop"> 
            <li class="notification-item">
              <i class="bi bi-exclamation-circle text-warning"></i>
              <div>
              
                <p>${notis.message }</p>
                
              </div>
            </li>
			</c:forEach>
            <li>
              <hr class="dropdown-divider">
            </li>
            
            <li class="dropdown-footer">
              <a href="show_all">Show all notifications</a>
            </li>

          </ul><!-- End Notification Dropdown Items -->

        </li><!-- End Notification Nav -->

        

        <li class="nav-item dropdown pe-3">

          <a class="nav-link nav-profile d-flex align-items-center pe-0" href="#" data-bs-toggle="dropdown">
<% out.println("<img alt=\"\" src=\"data:image/*;base64,"+c.getImage()+"\" width=\"60\" height=\"70\" class=\"rounded-circle\"/>");  %>
            <span class="d-none d-md-block dropdown-toggle ps-2"><%out.println(c.getName()); %></span>
          </a><!-- End Profile Iamge Icon -->

          <ul class="dropdown-menu dropdown-menu-end dropdown-menu-arrow profile">
            <li class="dropdown-header">
              <h6><%out.println(c.getName()); %></h6>
              <span>Web Designer</span>
            </li>
            <li>
              <hr class="dropdown-divider">
            </li>

            <li>
              <a class="dropdown-item d-flex align-items-center" href="profile">
                <i class="bi bi-person"></i>
                <span>My Profile</span>
              </a>
            </li>
            <li>
              <hr class="dropdown-divider">
            </li>

            <li>
              <a class="dropdown-item d-flex align-items-center" href="accSettings">
                <i class="bi bi-gear"></i>
                <span>Account Settings</span>
              </a>
            </li>
            <li>
              <hr class="dropdown-divider">
            </li>

            <li>
              <a class="dropdown-item d-flex align-items-center" href="help">
                <i class="bi bi-question-circle"></i>
                <span>Need Help?</span>
              </a>
            </li>
            <li>
              <hr class="dropdown-divider">
            </li>

            <li>
              <a class="dropdown-item d-flex align-items-center" href="logout">
                <i class="bi bi-box-arrow-right"></i>
                <span>Sign Out</span>
              </a>
            </li>

          </ul><!-- End Profile Dropdown Items -->
        </li><!-- End Profile Nav -->

      </ul>
    </nav><!-- End Icons Navigation -->

  </header><!-- End Header -->

  <!-- ======= Sidebar ======= -->
  <aside id="sidebar" class="sidebar">

    <ul class="sidebar-nav" id="sidebar-nav">

      <li class="nav-item">
        <a class="nav-link collapsed" href="afterLogin">
          <i class="bi bi-grid"></i>
          <span>Dashboard</span>
        </a>
      </li><!-- End Dashboard Nav -->

      

     

      <li class="nav-heading">Pages</li>
		
	  <li class="nav-item">
        <a class="nav-link collapsed" href="applyNow">
          <i class="bi-pen"></i>
          <span>Apply as a Politician</span>
        </a>
      </li><!-- End Apply As a Politician Page Nav -->
      
      <li class="nav-item">
        <a class="nav-link collapsed" href="corruption">
          <i class="bi bi-envelope"></i>
          <span>Corruption</span>
        </a>
      </li><!-- End Corruption Page Nav -->
		
      <li class="nav-item">
        <a class="nav-link collapsed" href="profile">
          <i class="bi bi-person"></i>
          <span>Profile</span>
        </a>
      </li><!-- End Profile Page Nav -->

	  <li class="nav-item">
        <a class="nav-link collapsed" href="myPosts">
          <i class="bi bi-envelope"></i>
          <span>My Posts</span>
        </a>
      </li><!-- End My Posts Page Nav -->	
      
      <li class="nav-item">
        <a class="nav-link collapsed" href="viewPol">
          <i class="bi bi-person"></i>
          <span>View Politicians</span>
        </a>
      </li><!-- End View Politicians Page Nav -->

      <li class="nav-item">
        <a class="nav-link collapsed" href="help">
          <i class="bi bi-question-circle"></i>
          <span>F.A.Q</span>
        </a>
      </li><!-- End F.A.Q Page Nav -->
		
		
	  <li class="nav-item">
        <a class="nav-link collapsed" href="accSettings">
          <i class="bi bi-question-circle"></i>
          <span>Account Settings</span>
        </a>
      </li><!-- End ACC Settings Page Nav -->
      
      <li class="nav-item">
        <a class="nav-link collapsed" href="contact">
          <i class="bi bi-envelope"></i>
          <span>Contact</span>
        </a>
      </li><!-- End Contact Page Nav -->

      

      

      

    </ul>

  </aside><!-- End Sidebar-->
  
  
  <aside id="sidebar1" class="sidebar1">

    <ul class="sidebar-nav" id="sidebar-nav">

      

      <li class="nav-item nav-item11">
      	
          <i class="bi bi-person">Post</i>
          <form action="corruptionUploadFile" method="post" enctype="multipart/form-data">
			To:  <input class="form-control" type="text" name="to"><br>
				<label for="img">Upload image:</label>
		  		<input class="form-control"  type="file" id="img" name="file" multiple><br>
		  		  <input class="form-control"  type="text" name="description" placeholder="Tell Me About the Post"> <br>
		  		Post : <input type="submit" class="btn btn-primary btn-sm">
			</form>
        
      </li><!-- End Profile Page Nav -->

      

      

    </ul>

  </aside><!-- End Sidebar-->

  <main id="main" class="main">

    <div class="pagetitle">
      <h1>Home</h1>
      <nav>
        <ol class="breadcrumb">
          <li class="breadcrumb-item"><a href="afterLogin">Home</a></li>
          <li class="breadcrumb-item active">home</li>
        </ol>
      </nav>
    </div><!-- End Page Title -->


    <section class="section">
      <div class="row1">
        <c:forEach var="post" items="${cpost}">
        <div class="col-lg-60">
          <div class="card">
            <div class="card-body">

              <!-- Line Chart -->
              <div id="lineChart"></div>
                <h5 class="card-title">From : ${post.post_from_name }</h5>

                      
                
				<p> To :  ${post.post_to_name } <br>From : ${post.post_description}</p><br>
              <a><img alt="" src="data:image/*;base64,${post.image}" width="700" height="380" class="poster"/></a><br>
              
              <!-- End Line Chart -->
              
            </div>
          </div>
        </div>
        
		</c:forEach>
        

      </div>
    </section>

  </main><!-- End #main -->

  

  <a href="#" class="back-to-top d-flex align-items-center justify-content-center"><i class="bi bi-arrow-up-short"></i></a>

  <!-- Vendor JS Files -->
  <script src="assets/vendor/apexcharts/apexcharts.min.js"></script>
  <script src="assets/vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
  <script src="assets/vendor/chart.js/chart.min.js"></script>
  <script src="assets/vendor/echarts/echarts.min.js"></script>
  <script src="assets/vendor/quill/quill.min.js"></script>
  <script src="assets/vendor/simple-datatables/simple-datatables.js"></script>
  <script src="assets/vendor/tinymce/tinymce.min.js"></script>
  <script src="assets/vendor/php-email-form/validate.js"></script>

  <!-- Template Main JS File -->
  <script src="assets/js/main.js"></script>

</body>
</html>