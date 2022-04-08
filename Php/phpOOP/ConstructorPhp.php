<?php
    Class Store{
        private $name;
        private $address;
        
        function __construct($name,$address){
            $this->name = $name;
            $this->address = $address;
        }
        function displayName(){
            return $this->name;
        }
        function displayAddress(){
            return $this->address;
        }
    }

    $coldstore = new Store('Budha Cold Store','Bhaktapur');
    echo$coldstore->displayName()."<br>";
    echo$coldstore->displayAddress();

?>