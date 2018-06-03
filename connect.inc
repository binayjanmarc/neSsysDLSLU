<?php
	$hostname='nessys.mysql.database.azure.com';
	$username='nessys@nessys';
	$password='P@ssw0rd';
	$conn=mysql_connect($hostname, $username, $password) 
		or die ('Error connnecting to mysql');mysql_select_db('nessys');
?>