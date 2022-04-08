<?php
//    4. Write a PHP program to save the information in a database using AJAX.
   $conn = mysqli_connect("localhost","root","","ajax") or die("failed to connect");

?>

<!DOCTYPE html>
<html>
<head>
    <title>Insert With Ajax</title>
</head>
<body>
    <form id="formData">
        <input type="text" placeholder="name" name="username">
        <br/>
        <input type="password"placeholder="password" name="password" >
        <br/>
        <input type="submit">
    </form>
</body>
<script src="./jquery.js"></script>
<script>
    $(document).ready(()=>{
        $('#formData').on("submit",(e)=>{
            e.preventDefault();
            $.ajax({
                url:"http://localhost/phpOOP/Lab/Ajax.php",
                type:"POST",
                data:$('#formData').serialize(),
                success:(data)=>{
                    
                    alert("inserted Succesfully");
                    
                }
            })     
        });
    });
</script>
</html>

<?php

    if(isset($_POST['username']) && isset($_POST['password'])){
        $username = $_POST['username'];
        $password = $_POST['password'];
        $sql = "INSERT INTO `ajaxinsert`(`username`, `password`) VALUES ('$username ','$password')";
        mysqli_query($conn,$sql);
           
    }

?>