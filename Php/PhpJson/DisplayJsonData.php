<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>JSON fetch-data</title>
</head>
<style>
    body{
        background-color:gray;
        display: flex;
        justify-content:center;
    }
    table {
        font-size:24px;
        text-align:center;
        background-color: #F0FFFF;
        border-collapse:collapse;
    }
</style>
<body>
    <div>
        <table border='1' id="load-json">
    
        </table>

    </div>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.6.0/jquery.min.js" integrity="sha512-894YE6QWD5I59HgZOGReFYm4dnWc1Qt5NtvYSaNcOP+u1T9qYdvdihz0PPSiiqn/+/3e7Jo4EaG7TubfWGUrMQ==" crossorigin="anonymous" referrerpolicy="no-referrer"></script>
    <script>
        $(document).ready(()=>{
            $.ajax({
                url:"FetchData.php",
                type:"POST",
                dataType:"JSON",
                success:(data)=>{
                    console.log(data);
                    $.each(data,(key,value)=>{
                        // $('#load-json').append(value.student_id+' '+value.student_name+' '+value.student_addrress+'<br>');
                        $('#load-json').append('<tr> <td>' + value.student_id+'</td><td> '+value.student_name+'</td><td> '+value.student_addrress+' </td></tr> ');
                    });
                }
            });
        });
    </script>
</body>
</html>