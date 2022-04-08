<?php

    class Database
    {
        private $host = "localhost";
        private $username = "root";
        private $password = "";
        private $conn;
        private $dbname = "student_management_system";
        public function __construct()
        {
            
            $this->conn = mysqli_connect($this->host,$this->username,$this->password,$this->dbname) or die("failed to connect");
            if($this->conn->connect_error)
            {
                die("failed to connect db");
            }
           
        }

        public function insert($table,$id,$name,$address){
           
            $tname = $table;
            $sid = $id;
            $sname = $name;
            $saddress = $address;
            
            $sql = "INSERT INTO `$tname`(`student_id`, `student_name`, `student_addrress`) VALUES ($sid,'$sname','$saddress')";
            
            if(mysqli_query($this->conn,$sql)){
                echo"inserted";
            }else{
                echo"not inserted";
            }
        }

        public function __destruct(){
            if($this->conn){
                mysqli_close($this->conn);
            }
        }

    }

    


?>