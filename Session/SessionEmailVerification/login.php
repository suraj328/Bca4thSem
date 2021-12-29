<?php
    include 'db_config.php';
    if(!empty($_POST['email']) || !empty($_POST['password'])){
        $email=$_POST['email'];
        $passwrd=$_POST['password'];
            $sql="SELECT * FROM `registeremail` where `Email`='$email'  And `Status`='verify'";
            $result=mysqli_query($conn,$sql);
            $matchrow=mysqli_num_rows($result);
            if($matchrow>=1){ 
                while($row=mysqli_fetch_assoc($result)){
                    if (password_verify($passwrd,$row['Password'])) {
                        session_start();
                        $_SESSION['loggedin']=true;
                        $_SESSION['email']=$email;
                        header("location:welcome.php");   
                    }else {
                        echo '<script>alert("password do not match")</script>';
                    }
                }
            }
    }
    
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <title>login page</title> 
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
        <legend>Hey Fill Up This Forms!!</legend>
        <form action="http://localhost/SessionEmailVerification/login.php" method="POST">
        <Table>
            <tr>
                <td><label for="email">User Name</label></td>
                <td><input id="email"type="text" name="email"></td>
            </tr>
            <tr>
                <td><label for="password">Password</label></td>
                <td><input id="password"type="text" name="password"></td>
            </tr>
            
            <tr>
                <td><button type="submit">Log in</button></td>
                <td><a href="Signup.php">Create an account!!</a></td>
            </tr>
            <tr class="write">

            </tr>
        </Table>
        </form>
    </fieldset>
    </section>
</body>
</html>