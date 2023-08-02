// Topic 1 :  How to print a line in JavaScript and what is a word and a keyword in JavaScript.
console.log("Hello world!");



// Topic 2 : let, var and const
const dulha = "Aman";
const dulhan = "Shraddha";

// var dulha = "Aman";
// var dulhan = "Shraddha";

// Since we are using var thus hum replace kar pa rahe hai Aman ko Alkah se agar apne ko chhaiye ki aisa na ho toh we need to use const instead of var

// dulha = "Alakh";

// Upon changing var to const we can see that Alakh, Aman ki dulhaniya nahi le ja sakta 
console.log(dulha + " weds " + dulhan);

// Now sawal aata hai then what is let bhai uska kya kaam hai var toh chalo variable hua const bhi chalo constant hua what is done by let?
// let is even responsible to create variables they have there set of diffrences but we will discuss Later




// Topic 3 : What is hoisting?
// variables and function could be hoisted, which means there declartion would be shifted at the top and thereby they could be said be hoisted.

console.log(a);
var a = 15;
// This var a  = 15; basically implies as 
// var a; // This is declaration
// a = 15; // this is intialization

// In case of variables the var a; moves to the top of the code which means its value is already declared within the code. But!! has not been assigned with any corresponding value.

// Topic : 4  Datatypes in JavaScript
// Primitives = number, boolean, string, undefined , null
// Reference = [], (), {}
// Aisi koi bhi value jisko copy karne par real copy nahi hota, balki uske main value ka refrence pass hojata hai, use hum refernce value kehte hai, aur jiska copy karne pe real copy jo jata hai woh value primitive type value hota hai.

// Since yaha apan primitive se deal kar rahe hai toh agar yaha maine b = 13  kara hai toh b ki vlue sirf change hogi aur pehle jab maine var b = a; kara tha toh b mei sirf a value copy hui thi par woh uski address ko store kar ke nahi baitha tha unlike Reference.
var a = 12;
var b = a;

b = 13;

// Par reference kya hota hai usmei yeh hota hai ki agar hum kuch bhi change karenge toy2 mei toh kya hoga ki since toy1 ko hi humne toy2 ko diya tha khelne ke liye toh isliye agar toy2 mei koi bhi changes aaye toh woh toy1 mei bhi refelect honge.
var toy1 = [1, 2, 3, 4, 5];
var toy2 = toy1;

toy2.pop(); // pop is used to remove the last element from the array.
// Ab chunki humne ek tareeke se toy2  se ched chad kari hai toh agar hume pata hai ki toy1 aur toy2 dono hi refrence hai toh hoga kya. agar toy2 ka last end hata diya toh toy1 ka bhi last end hat jayega.

// Topic 5 : Conditionals if , else if, ternary, switch
// Jaha pe bhi baat agar magar pe aayega toh iska istemaal karenge ab sawal aata hai kuch kuch joki chakra dega par apan karenge 
// Eg: if(-1)
if (-1) {
    console.log("Haye mori maiya je ka kar dao");
}
// yeh chalega kyunki javascript mei yeh false nahi hai kyunki javascript mei negative ka concept hi nahi hota hai waha pe sirf number hota hai bas to bhai kya kabhi false nahi aayega nahi bilkul aayega ................

if ("Apple") {
    console.log("Arey daiya ab hao aa gao");
}
// Ab sawal hai kab toh uska jawab truthly vs falsy se milta hai joki -- wala topic hai mere bhai ruk ja.


// Topic 6 : Loops : for, while, do-while;

