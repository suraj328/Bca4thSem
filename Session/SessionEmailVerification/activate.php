<?php
    echo"hello ! this page is for verification";
    include 'db_config.php';
    session_start();
    if (isset($_GET['Token'])) {
        $token=$_GET['Token'];
        $updatequerry="update registeremail set `status`='verify' Where `Token`='$token'";
        $run=mysqli_query($conn,$updatequerry);
        if($run){
            echo"verified sucess";
        }
        
    }
?>