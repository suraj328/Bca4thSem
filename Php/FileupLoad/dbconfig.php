<?php
    $server="localhost";
    $user="root";
    $password="";
    $dbname="Fileupload";

    $conn=mysqli_connect($server,$user,$password,$dbname);
    if(!$conn){
        echo"not connected";
    }
?>