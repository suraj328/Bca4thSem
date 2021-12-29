<?php
    include 'db_config.php';
    if(!empty($_POST['name']) || !empty($_POST['email']) || !empty($_POST['password']) || !empty($_POST['cpassword'])){
        $name=$_POST['name'];
        $email=$_POST['email'];
        $password=$_POST['password'];
        $cpassword=$_POST['cpassword'];
        if($password==$cpassword){
            $cpassrd=password_hash($password,PASSWORD_BCRYPT);
            $passrd=password_hash($cpassword,PASSWORD_BCRYPT);
            $token=bin2hex(random_bytes(10));
            $sql="SELECT * FROM `registeremail` where `Email`='$email' And `Username`='$name'";
            $result=mysqli_query($conn,$sql);
            $matchrow=mysqli_num_rows($result);
            if($matchrow==1){ 
                echo"Email already taken";
            }
            
            if($matchrow==0){
                $sql="INSERT  INTO `registeremail`(`Username`,`Password`,`Email`,`Token`,`Status`)VALUES('$name','$passrd','$email','$token','not_verify')";
                if(mysqli_query($conn,$sql)){
                $reciver_mail=$email;
                $subject="Verify ypur account";
                $body="Hi!!, $name.Click here to Verify Your Account <br> http://localhost/SessionEmailVerification/activate.php?Token=$token";
                $sender_mail="From:shahsuraj328@gmail.com";
            
                if(mail($reciver_mail,$subject,$body,$sender_mail)){
                    session_start();
                    $_SESSION['msg']="Check your mail to Verify Email $email";
                    echo '<script>alert("verify your email to activate your email");</script>';
                    header('location:login.php');
                }else{
                    echo '<script>alert("you have enetered invalid email");</script>';
                }  
                    echo"Registerd Sucessfully";

                }
            }
        }else{echo"Password and Comfirm password not matched";}
    }else {
        echo '<script>alert("note:field cannt be empty");</script>';
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
        <form action="http://localhost/SessionEmailVerification/Signup.php" method="POST">
        <Table>
            <tr>
                <td><label for="username">User Name</label></td>
                <td><input id="username"type="text" name="name"></td>
            </tr>
            <tr>
                <td><label for="email">Email</label></td>
                <td><input id="email" type="email" name="email"></td>
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