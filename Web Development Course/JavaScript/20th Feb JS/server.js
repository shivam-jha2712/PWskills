// Declartion of an array in javascript
let a = [1, 2, 3, 4, "Shivam", false];
console.log(a);

// Declearation of an array having some size and no elements
let b = new Array(5); // here size is defined but no elements are assigned
console.log(b);

// Decleration of an array in javascript with new Array() Concept
let c = new Array("abc", "def", "ghi");
console.log(c);

// Task 1: How to access elements of an array
console.log("Accessing array elements is done via indexing: ");
// JavaScript follows 0 based indexing and thus 
let i = 0;
for (i = 0; i<a.length; i++) {
    console.log(a[i]);
}