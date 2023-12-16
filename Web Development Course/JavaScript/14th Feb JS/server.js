// CONDITIONS AND LOOPS
// TO RUN : node __filename.js__

// Task 1 : Conditions Checking by the IF block 
console.log("// If-else Conditions: ");

let age = 21;

if (age >= 18) {
    console.log("Eligible to vote");
}
else {
    console.log("Not eligible to vote");
}
// Note : {} - These curly braces are known are block or scope 



// Task 2: Multiple conditional
console.log("// Multiple if-else Conditions: ");

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
console.log("// Switch case Conditions: ");

let user = "Shivam";

switch (user) {
    case "Admin":
        console.log("Hi! I am Admin");
        break;
    case "Student":
        console.log("Hi! I am Student");
        break;
    case "Shivam":
        console.log("Hello Master!! How is your day?");
        break;
    default:
        console.log("Hi! I am default");
        break;
}



// Task 4 : LOOPS (DO- WHILE, WHILE, FOR)

// FOR LOOP
console.log("For Loop : ");
for (let i = 0; i < 5; i++) {
    console.log(i);
}

// WHILE LOOP
console.log("While Loops : ");
let i = 0;

while (i < 5) {
    console.log(i);
    i++;
}

// DO-WHILE LOOP
console.log("Do-While Loops : ");
let j = 1

do {
    console.log(j);
    j++;
}
while (j > 5);


// Task 5 : Ternary Operators/Conditions

// ? = if and : = else
// condition ? TRUE : FALSE

console.log("Ternary Conditions: ");
isLoggedIn = true;
isLoggedIn ? console.log("Home Page") : console.log("Not Logged In");

// Note : Even if the variable isLoggedIn not mentioned under any of the three variable  defining stratergy of var, let or const. Still it is working because JavaScript is a loosely typed langauge thus it even works fine even though the variable is not defined