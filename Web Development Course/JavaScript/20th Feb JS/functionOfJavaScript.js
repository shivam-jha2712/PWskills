// Function declaration and calling
function greet() {
    console.log("Hi There!");
}

greet();


// Calling a parameterised function
function sqr(x) { // x -> Parameter: it is the placeholder to the function
    // console.log(x * x);
    return x * x;
}

let a = sqr(8); // 8 -> Arguement : The value assigned to the parameter in a function.
console.log(a);



// Function without params and return statement
function speak() {
    console.log("Jimmy");
}

speak();
speak();
speak();
speak();
speak();



// Function with params and return statement
function passMessage() {
    return "Jimmy is MrBeast"; // returning the message
}

let data = passMessage(); // catching the returned message value

console.log(data); // printing the returned message value





// Fuunction with One parameter

function displayMessage(messageToBeDisplayed) {
    console.log(messageToBeDisplayed);
}


displayMessage("I am the message to be displayed");
displayMessage("I am the message to be viewed");


// Function with default parameter
function displayTheMessage(messageToBeDisplayed = "I am a message to be displayed") // The default parameter is the messageToBeDisplayed
{
    console.log(messageToBeDisplayed);
}

// Here the arguement passed is "I am the message to be viwed" thus it will be printed out
displayTheMessage("I am the message to be viwed");


// Here there is no argument passed thus the default value assigned will be printed out ie; "I am the message to be viwed"
displayTheMessage();