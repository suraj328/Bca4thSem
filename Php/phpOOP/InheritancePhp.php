<?php
    class Fruits
    {
        private $name;
        private $taste;

        function setName($name){
            $this->name = $name;
        }
        function getName(){
           return $this->name;
        }
    }

    class Apple extends Fruits{
        function apple(){
            echo"I am apple";
        }
    }

    $appleobj = new Apple();
    $appleobj->setName('strawberry');
    echo$appleobj->getName();
    
?>