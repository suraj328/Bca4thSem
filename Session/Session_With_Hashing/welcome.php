<?php
    session_start();
    if(!isset($_SESSION['loggedin']) || $_SESSION['loggedin']!=true){
        header("location: login.php" );
        exit;
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>hello <?php echo$_SESSION['Username'];?></title>
</head>
<body>
    <div>
        <p>hello <?php echo$_SESSION['Username'];?> ,welcome to my page </p>
    </div>
    <div><a href="logout.php">Logout</a></div>
</body>
</html>