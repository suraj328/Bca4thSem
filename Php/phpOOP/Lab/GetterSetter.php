<?php
    // 1. Write a PHP class containing following variables:
    // a. name
    // b. age
    // c. gender
    // d. address
    // Create respective getters and setters for the class and print the values using the object.


    class Person {
        private $name;
        private $age;
        private $gender;
        private $address;


        public function setName($name){
            $this->name = $name;
        }
        public function getName(){
            return $this->name;
        }
        public function setAge($age){
            $this->age = $age;
        }
        public function getAge(){
            return $this->age;
        }
        public function setGender($gender){
            $this->gender = $gender;
        }
        public function getGender(){
            return $this->gender;
        }
        public function setAddress($address){
            $this->address = $address;
        }
        public function getAddress(){
            return $this->address;
        }
    }

    $person1 =  new Person();
    $person1 -> setName("Suraj Sah");
    $person1 -> setAge("21");
    $person1 -> setGender("Male");
    $person1 -> setAddress("Koteshwor,kathmadu");

    
    echo$person1 -> getName()."<br>";
    echo$person1 -> getAge()."<br>";
    echo$person1 -> getGender()."<br>";
    echo$person1 -> getAddress();

    


?>