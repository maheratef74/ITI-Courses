/*
Make a function in external JS file,
 that takes 2 parameters and return sum of them
 (function return the result, don't alert or print it), 
 and in your page ask the user to enter 2 numbers,
  call the function, and display the result returned by the function. 
 */
function sum(num1 , num2){
    return num1 + num2;
}

number1 = parseFloat(prompt("enter first number:"));
number2 = parseFloat(prompt("enter second number:"));

result = sum(number1, number2);

alert("the sum is: " + result);