let screen=document.getElementById('screen');
buttons=document.querySelectorAll('button');
result='';
for(btn of buttons){
    btn.addEventListener('click',(calc)=>{
        buttonResult=calc.target.innerText;
        switch(buttonResult){
            case 'X' :
                btnResult = '*';
                result += btnResult;
                screen.value = result;
                break;
            case 'C':
                screen.value = '';
                break;
            case '=' :
                screen.value=eval(result);
                break;
            default :
                result+=buttonResult;
                screen.value=result;
                break;
        }
    })
}