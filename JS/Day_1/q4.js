/*
prompt user to enter his name, make sure that name is string, 
and let the user enter his birth year and make sure that it is a number,
 and it is less than 2010, and then calculate his age. 
 for each prompt if user input valid show him next prompt, 
 if not valid show him the same prompt again until user enters it correctly (use loops).
  And after validating user input, write all user input on the page in that format: 

Name: ahmed 

Birth year: 1981 

Age: 30 
*/


var name;

while (true) {
    name = prompt("enter your name:");

    if (name && isNaN(name)) break;
    else alert("invalid name! please enter a valid string.");
}

var birthYear;

while (true) {
    birthYear = prompt("enter your birth year (must be a number less than 2010):");

    birthYear = parseInt(birthYear);

    if (!isNaN(birthYear) && birthYear < 2010 ) break;
    else alert("invalid birth year! please enter a valid number less than 2010.");
}

var age = 2025 - birthYear;

document.write("<br> Name: " + name + "<br>");
document.write("Birth year: " + birthYear + "<br>");
document.write("Age: " + age);
