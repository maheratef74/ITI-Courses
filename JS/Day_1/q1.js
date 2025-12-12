/*
Ask the user to enter their age using a prompt dialog box. 

Convert the entered age from a string to an integer. 

If the age is a number:  

– Display a confirmation box to verify the age. 

–  If their age is less than 18, show an alert with a message "Sorry, you are underage. Access denied."; otherwise, display a welcome message "Welcome! You have access to the platform." 

If the user does not enter a valid number, show an alert with a message "Invalid input. Please enter a valid age next time.". 
*/

age = prompt("enter your age: ")
age = parseInt(age)

if(!isNaN(age)) {
   
    confirmation = confirm("you entered: " + age + ". Is this correct ???");

    if (confirmation) {
        if (age < 18) alert("sorry, you are underage. Access denied.");
    
        else alert("welcome! you have access to the platform.");   
    }
}
else alert("invalid input.");
