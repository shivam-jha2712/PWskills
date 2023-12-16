// push : it is responsible for Pushing an element to the end of array.

console.log("push method");
a1 = [1, 2, 3, 4, 5]
a1.push(6);
console.log(a1);
console.log("push method to add multiple elements using commas");
a1.push(7, 8);
console.log(a1);

// pop : it is responsible for removing an element from the end of the array.
console.log("pop method");
let p = a1.pop();
console.log(a1);
console.log(p);

// Shift : it responsible to remove the element from the start of the array.
console.log("shift method");
let s = a1.shift();
console.log(a1);
console.log(s);

// Unshift : it responsible to add the element from the start of the array
console.log("unshift method");
a1.unshift(0);
console.log(a1);

// arr1.concat(arr2) : it is responsible to concatenate the elements of the arr1 with arr2
console.log("concat method");
let a2 = [10, 20, 30, 40];
let a3 = a1.concat(a2);
console.log(a3);

// arr.join(sep) : this is responsible to both concatenate and convert the array to a string 
console.log("join method : converts array to string and can take what to be used as separator");
let j = a3.join(" ");
console.log(j);


// arr.reverse() : reverse the array
console.log("reverse() method");
a3.reverse();
console.log(a3);

// arr.indexOf() : finds the index of the first occurrence of element in array
console.log("indexOf() method");
let i = a3.indexOf(10);
console.log(i);

// arr.slice(start, end) : used to give the array from start to end-1
console.log("slice method");
let sl = a3.slice(2, 7);
console.log(sl);

// arr.splice(index, no of ele to be removed, ele) : used to remove element from a specific index of the array and also helps you to justify whether it would delete certain elements on insertion or not.
console.log("splice method but no deletion of elements on addition of 69 at 2nd index");
a3.splice(2, 1, 69);
console.log(a3);
console.log("splice method with deletion of 7 elements on addition of 69 at 2nd index");
a3.splice(2, 7, 69, 70);
console.log(a3);
