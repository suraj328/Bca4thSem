<?php

    // database connnection
    $conn = mysqli_connect("localhost","root","","student_management_system") or die("failed to connect");


    // sql query to fetch data from data base
    $sql = "SELECT * FROM `student`";
    $result = mysqli_query($conn,$sql);
    $arr = mysqli_fetch_all($result,MYSQLI_ASSOC);
   

    // converting array to JSON
   echo json_encode($arr);


?>