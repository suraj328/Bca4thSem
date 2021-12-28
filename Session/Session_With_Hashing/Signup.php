<?php
    include 'db_config.php';
    if(!empty($_POST['name']) || !empty($_POST['password']) || !empty($_POST['cpassword'])){
        $name=$_POST['name'];
        $password=$_POST['password'];
        $cpassword=$_POST['cpassword'];
        if($password==$cpassword){
            $sql="SELECT * FROM `Registerd_Account`where `Username`='$name'";
            $result=mysqli_query($conn,$sql);
            $matchrow=mysqli_num_rows($result);
            if($matchrow==1){
                echo"username taken";
            }
            
            if($matchrow==0){
                $sql="INSERT  INTO `Registerd_Account`(`Username`,`Password`)VALUES('$name','$password')";
                if(mysqli_query($conn,$sql)){
                    echo"Registerd Sucessfully";
                    $logg=true;
                }
            }
        }else{echo"Password and Comfirm password not matched";}
    }

?>




<!DOCTYPE html>
<html lang="en">
<head>
    <title>StoreData</title> 
    <style>
        section{
            margin-top:10%;
            margin-left:25%;
            
            width:40vw;
            height:40%;
        }
        
    </style>
</head>
<body>
    <section>
    <fieldset>
        <legend>sign up page!!</legend>
        <form action="http://localhost/folder/Signup.php" method="POST">
        <Table>
            <tr>
                <td><label for="username">User Name</label></td>
                <td><input id="username"type="text" name="name"></td>
            </tr>
            <tr>
                <td><label for="password">Password</label></td>
                <td><input id="password"type="text" name="password"></td>
            </tr>
            <tr>
                <td><label for="cpassword">Comfirm Password</label></td>
                <td><input id="cpassword"type="text" name="cpassword"></td>
            </tr>
            
            <tr>
                <td><input type="submit"></td>
                <td><a href="login.php">Already have an account!!</a></td>
            </tr>
        </Table>
        </form>
    </fieldset>
    </section>
</body>
</html>