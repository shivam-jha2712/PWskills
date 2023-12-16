// Question 1: 

let a = 3;
let b = new Number(3);
let c = 3;

console.log(a == b);
console.log(a === b);
console.log(b == c);

// true false true

// Question 2 : 
let greeting;
greeting = {};
console.log(greeting);

// {}

// Question 3:

let number = 0;
console.log(number++);
console.log(++number);
console.log(number);

// 0 2 2

// Question 4:
const sum = eval("10*10+5");
console.log(sum);

// 105


// Question 5:

var num = 8;
var num = 10;

console.log(num);

// 10- since var can be changed and const cannot


// Question 6:
console.log(typeof typeof 1);

// string

const numbers = [1, 2, 3];
numbers[10] = 11;
console.log(numbers);

// [ 1, 2, 3, <7 empty items>, 11 ]

// Question 7:
console.log(3 + 4 + "5");
// 75

// Question 8:

// const name = "PW Skills"
// console.log(name());
// Type Error

for (let i = 1; i < 5; i++) {
    if (i === 3)
        break;
    console.log(i);
}