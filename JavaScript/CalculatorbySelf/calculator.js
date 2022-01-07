let temp = '';
var screen = document.getElementById('screen');

function clickOPERATOR(calc) {

    if (calc == '+' || calc == '-' || calc == '/' || calc == '*' || calc == '%') {
        temp = screen.value;
        temp = temp + calc;
        screen.value = temp;
    }


}

function clickCLEAR(clear) {
    if (clear == "C") {
        a = '';
        screen.value = a;
    }
}

function clickNum(number) {
    if (number == '1' || number == '2' || number == '3' || number == '4' || number == '5' || number == '6' || number == '7' || number == '8' || number == '9' || number == '0' || number == '.'); {
        temp = screen.value;
        temp = temp + number;
        screen.value = temp;
    }
}

function clickOtherOperator(otheroperator) {
    temp = screen.value;
    temp = temp + otheroperator;
    screen.value = temp;
}

function clickEvaluate(Evaluate) {
    if (Evaluate == '=') {
        try {
            temp = eval(screen.value);
            screen.value = temp;
        } catch (error) {
            screen.value = 'Incorect Format'
        }
    }
}

function clickDel() {
    temp = screen.value;
    res = temp.slice(0, -1);
    screen.value = res;
}