<?php
    // 3. Write a PHP example to achieve multiple inheritance.

    interface Cat{
        public function meow();
    }
    interface Dog{
        public function bark();
    }
    class Animal implements Cat,Dog{
        public function meow(){
            echo"oh!! It's a Cat Sound";
        }
        public function bark(){
            echo"oh!! It's a Dog Sound";
        }
    }

    $sound = new Animal();
    echo$sound->meow()."<br/>";
    echo$sound->bark()."<br/>";
?>