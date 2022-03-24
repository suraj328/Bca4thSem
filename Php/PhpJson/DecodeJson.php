<?php

    $json = 'file/std.json';
    $jsonstring = file_get_contents($json);
    $arr = json_decode($jsonstring ,true);
    // echo"<pre>";
    // print_r($arr);
    // echo"</pre>";

    echo'<table border="1">';
    foreach($arr as list("student_id"=>$id,"student_name"=>$name,"student_addrress"=>$address)){
        echo"<tr><td>{$id}</td><td>{$name}</td><td>{$address}</td></tr>";
    }
    echo'</table>';
?>