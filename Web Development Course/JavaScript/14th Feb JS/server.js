// CONDITIONS AND LOOPS
// TO RUN : node __filename.js__

// Task 1 : Conditions Checking by the IF block 
let age = 21;

if (age >= 18) {
    console.log("Eligible to vote");
}
else {
    console.log("Not eligible to vote");
}
// Note : {} - These curly braces are known are block or scope 



// Task 2: Multiple conditional

let signal = "red";
if (signal === "red") {
    console.log("STOP!!");
} //Condition 1
else if (signal === "yellow") {
    console.log("Go Slow");
}//Condition 2
else if (signal === "green") {
    console.log("GO!!");
}//Condition 3
else {
    console.log("invalid");
}// Terminating Condition 



// Task 3 : Switch Case (used as alternative of if-else)

let user = "Jd";

switch (user) {
    case "Admin":
        console.log("Hi! I am Admin");
        break;
    case "Student":
        console.log("Hi! I am Student");
        break;
    case "Mentor":
        console.log("Hi! I am Mentor");
        break;
    default:
        console.log("Hi! I am default");
        break;
}



// Task 4 : LOOPS (DO- WHILE, WHILE, FOR)
