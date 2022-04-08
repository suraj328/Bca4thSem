<?php
    Class Book {
        private $title;
        private $name;
        private $author;

        function setTitle($title){
            $this->title = $title;
        }
        function getTitle(){
           return $this->title;
        }
        function setName($name){
            $this->name = $name;
        }
        function getName(){
           return $this->name;
        
        }
        function setAuthor($author){
            $this->author = $author;
        }
        function displayAuthor(){
           return $this->author;
        }

    }
    echo"----------------Book1----------------"."<br>";

    $book1 = new Book();
    $book1->setTitle("Origin of Web Devlopment");
    echo$book1->getTitle()."<br>";
    $book1->setName("Web Devlopment");
    echo$book1->getName()."<br>";
    $book1->setAuthor("Justin Beiber");
    echo$book1->displayAuthor()."<br>";
    
    echo"----------------Book2----------------"."<br>";
    
    $book2 = new Book();
    $book2->setTitle("Origin of Java");
    echo$book2->getTitle()."<br>";
    $book2->setName("Java");
    echo$book2->getName()."<br>";
    $book2->setAuthor("Suraj Shah");
    echo$book2->displayAuthor()."<br>";
?>