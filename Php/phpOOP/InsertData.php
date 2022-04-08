<?php
    include 'DbConfig.php';
    // $db->insert($table,$name,$address);
    
    class Insert{

        private $id;
        private $name;
        private $address;
        private $obj;
        private $table = 'student';
        
        function __construct(){
            // $db = new Database();
            if(!empty($_POST['name']) && !empty($_POST['address']) && !empty($_POST['id']) ){
                $this->id = $_POST['id'];
                $this->name = $_POST['name'];
                $this->address = $_POST['address'];
                $this->table = 'student';
            }
        }
        function insert(){
            $this->obj = new Database;
            $this->obj->insert($this->table,$this->id,$this->name,$this->address);
        }

        function __destruct(){
            empty($this->name);
            empty($this->address);
        }
    }

    $insert = new Insert();
    $insert->insert();
    
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="POST">
        id<input type="number" name="id"><br>
        name<input type="text" name="name"><br>
        address<input type="text" name="address"><br>
        <input type="submit">
    </form>
</body>
</html>