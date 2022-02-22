<?php
    $to_email="yourromeo328@gmail.com";
    $subject="mail sent sucessfully";
    $body="hello chaatey";
    $headers="From:shahsuraj328@gmail.com";

    if(mail($to_email,$subject,$body,$headers)){
        echo"sucessfully send mail";
    }else{
        echo"what the hell problem showed on";
    }
?>