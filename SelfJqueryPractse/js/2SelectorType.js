// for Action

$(document).ready(function () {
    /*
        types of selector in html
        1.element selector
        2.id selector 
        3.class selector
        */


    /*1.element selector[slected element by tag name.example:-div,p,section]
    Example:-$('p').click();
    example of element selector is given below:-*/
    $('p').click(function () {
        console.log("you clicked on p,this an example of id selector", this);//[console.log() is used to print in console].

    });



    //2.Id selector[Id selector helps to select an item by given id for example id="idname" and it is used BY#idname]
    //    syntax:-$('#idexample').click(function();
    // under givenprogram is an example of id selector
    $('#idexample').click(function () {
        console.log("this is an example of idselector,you clicked on id selected items", this);

    });


    //3.class selector[class selector helps to select an item by given id for example id="idname" and it is used BY#idname while using class we can select multiple html tag or element]
    //syntax :-$('.classexample').function();
    // under given is a program or example of class selector
    $('.classexample').click(function () {

        console.log("i am from class selecor example ,you clicked on class selector element", this);
    });

    //other selectors
    //example $('*').click();it will select all element
    //example $('p.classname').click();it will select only paragraph which belongs to classname given as like .classname
    // example $('this').click();it will select only clicked items

});