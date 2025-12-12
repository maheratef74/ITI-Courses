/* 
Make a button on a page when user clicks it, 
ask him to enter math expression (Ex. 3+4*5/10*8),
 and execute this expression and 
 then show the result of this expression for the user in an alert in that format: 
(You entered: 3+4*5, and the result is: 23).  
*/

function calculateExpression() {

    expression = prompt("enter a math expression (like: 3+4*5/10*8):");
   
    alert("You entered: " + expression + ", and the result is: " +  eval(expression));
}
