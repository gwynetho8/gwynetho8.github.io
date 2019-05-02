body {
	background-color: #ccc;
}
html, body {
	margin: 0;
	padding: 0;
	font-family: Verdana, Geneva, sans-serif;
	
}
#wrap {
	width: 1000px;
	margin: 0 auto;
	
}

header img {width:100%;}

nav {
	background-color:rgb(14, 200, 199);
	padding: 10px 0;
} 
	
article {
	background-color: #EC3632;
	overflow:auto;
}

 aside {
	background-color: #EC3632;
} 

#sidebar {
	float: left;
	padding: 3%;
	width: 13%
}

#sidebar ul {
	margin: 0;
	padding: 0;
	list-style-type: none;
}

#sidebar li {
	margin: 40px 0;
}

#sidebar li a {
	color: white;
	
	text-decoration: none;
}

section {
	width:75%;
	float:right;
	background-color:white;
	padding: 20px;
}

nav ul li  {
	text-decoration: none;
	color: white;
	margin: 3em;
	
}

	
aside ul li a {
	text-decoration: none;
	color: white;
}



ul {
	list-style: none;
	
}

ul li {
	display: inline;
	
}


footer {
	background-color:rgb(14, 200, 199);
	
	padding: 10px;
} 



footer li::before {
	content: "|";
	margin: 0 10px;
	
}

footer .remove::before {
	content: "";
	
}


	@media screen and (min-width:960px) and (max-width:1100px) {
				
				#wrap {
				width: 100%;
				}
			}
			
				@media screen and (min-width:751px) and (max-width:959px) {
				
				#wrap {
				width: 100%;
				}
				
				#nav a {
				padding: 0.5em 30px;
				}
			}
			
			
				@media screen and (min-width:500px) and (max-width:750px) {
				
				#wrap {
				width: 100%;
				}
				
				#nav a {
				padding: 0.5em 5px;
				
				}
				
				.column1, .column2, .column3 {
				width: 97%;
				float: left;
				margin: 1%;}	
				
			}
			
			
			
			
				@media screen and (max-width: 499px) {
				
				#wrap {
				width: 100%;
				}
				
				nav a {
				padding: 0.5em 30%;
				}
				
				nav li, aside li {
					display: block;
					margin: 20px 0;	
				}
				
				#sidebar, section {
				width: 97%;
				float: left;
				margin: 1%;}
	
			}
	
				
				
				
		</style>