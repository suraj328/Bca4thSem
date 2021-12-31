<?php
    include "dbconfig.php";
    if(isset($_POST['submit'])){
        $name=$_POST['name'];
        $faculty=$_POST['faculty'];
        $file=$_FILES['file'];
        // print_r($file);
        $filename=$file['name'];//it gives files name
        $filepath=$file['tmp_name'];//it gives file location or path
        $fileerror=$file['error'];//it shows the number of errors

        if($fileerror==0){
            $distfolder='uploadedfile/'.$filename;//it is used to just print the distinant folder and  file name provided by user
            // echo"$distfolder";
            move_uploaded_file($filepath,$distfolder);

            $iquery="INSERT INTO `examplefile`(`Name`,`Faculty`,`uploadedfile`) VALUES('$name','$faculty','$distfolder')";

            if(mysqli_query($conn,$iquery)){
                echo"inserted sucessfully";
            }
        }
    }else{
        echo"form has not submitted";
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <title>file upload</title>
</head>
<body>
    <div><form action="fileupload.php" method="POST" enctype="multipart/form-data">
        <input type="text" placeholder="your name" name="name">
        <br>
        <br>
        <input type="text" placeholder="faculty" name="faculty">
        <br>
        <br>
        <input type="file" placeholder="photos here" name="file">
        <br>
        <br>
        <input type="submit" name="submit">
    </form></div>
</body>
</html>