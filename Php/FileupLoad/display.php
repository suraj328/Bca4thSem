
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table border="1px">
        <thead>
            <th>Name</th>
            <th>Faculty</th>
            <th>pics</th>
        </thead>
        
        <tbody>
            <?php
                    include 'dbconfig.php';
                
                    $dquery="SELECT * FROM `examplefile`";
                    $iquery=mysqli_query($conn,$dquery);
                if($iquery){
                    echo"Data fetched";
                }
                    
                    //$result=mysqli_fetch_array($iquery);
                    while($result=mysqli_fetch_array($iquery)){

                    ?>
                    <tbody>
                        <tr>
                            <td><?php echo$result['Name']; ?></td>
                            <td><?php echo$result['Faculty']; ?></td>
                            <td><img src="<?php echo$result['uploadedfile']; ?>" alt=""  height="100px" width="200px"></td>
                        </tr>
                    </tbody>
                    <?php
                    }
                    ?>
        </tbody>
    </table>
</body>
</html>

