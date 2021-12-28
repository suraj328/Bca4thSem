<?php
    include 'db_config.php';
    if(!empty($_POST['name']) || !empty($_POST['password'])){
        $name=$_POST['name'];
        $passwrd=$_POST['password'];
        
        
            $sql="SELECT * FROM `Registerd_Account`where `Username`='$name'";
            $result=mysqli_query($conn,$sql);
            $matchrow=mysqli_num_rows($result);
            if($matchrow==1){ 
                while($row=mysqli_fetch_assoc($result)){
                    if (password_verify($passwrd,$row['Password'])) {
                        session_start();
                        $_SESSION['loggedin']=true;
                        $_SESSION['Username']=$name;
                        header("location:welcome.php");   
                    }else {
                        echo '<script>alert("password do not match")</script>';
                    }
                }
            }else{
                echo'<script>alert("account doesnt exist")</script>';
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
        <form action="http://localhost/folder/login.php" method="POST">
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