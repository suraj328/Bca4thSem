<?php

    // basic example json encode
    // $arr = array('a'=>1,'b'=>2,'c'=>3,'d'=>4);
    // echo json_encode($arr);




    // basic json decode
    $jsondata = '{
        "a": 1,
        "b": 2,
        "c": 3,
        "d": 4
      }';
    
      $result = json_decode($jsondata,true);
      echo"<pre>";
      print_r($result);
      echo"</pre>";



?>