<?php
    // 2.Create a parent class Vehicle which has following methods and inherit it using at least
    // two child classes with their additional function. Create objects of respective child classes
    // and access all the functions of those child classes.

    class Vechile {
        private $color;
        private $engine;

        public function setColor($color){
            $this->color = $color;
        }
        public function getColor(){
            return $this->color;
        }
        public function setEngine($engine){
            $this->engine = $engine;
        }
        public function getEngine(){
            return $this->engine;
        }
        
    }

    class Car extends vechile{
        private $carWheel;

        public function setCarWheel($carWheel){
            $this->carWheel = $carWheel;
        }
        public function getCarWheel(){
            return $this->carWheel;
        }
    }

    class Bike extends Vechile{
        private $bikeWheel;

        public function setBikeWheel($bikeWheel){
            $this->bikeWheel = $bikeWheel;
        }
        public function getBikeWheel(){
            return $this->bikeWheel;
        }

    }

    $BMW = new Car();
    $BMW->setColor('blue');
    $BMW->setEngine('BMW-32566');
    $BMW->setCarWheel(4);

    $MT = new Bike();
    $MT->setColor('Black');
    $MT->setEngine('Yamaha-32566');
    $MT->setBikeWheel(2);


    echo".............Car..................<br/>";
    echo$BMW->getColor()."<br/>";
    echo$BMW->getEngine()."<br/>";
    echo$BMW->getCarWheel()."<br/>";


    echo"..............Bike......................<br/>";
    echo$MT->getColor()."<br/>";
    echo$MT->getEngine()."<br/>";
    echo$MT->getBikeWheel()."<br/>";

?>