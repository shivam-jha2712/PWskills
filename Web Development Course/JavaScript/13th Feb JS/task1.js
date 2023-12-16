// 1.  Print the amount of Course and the GST with it.

let pwSkillsCourse = 200
let gstOnCourse = 36

console.log("Final Price :", pwSkillsCourse + gstOnCourse);

// 2.  For a DSA COurse of cost 500 with same gst of rupees 36 find the value
let pwDSACourse = 500

console.log("Final Price :", pwDSACourse + gstOnCourse);
console.log("Final Price :", pwDSACourse - gstOnCourse);
console.log("Final Price :", pwDSACourse * gstOnCourse);
console.log("Final Price :", pwDSACourse / gstOnCourse);

// Modulo(%), Division(/), Power(**)
console.log("Answer is :", 5 % 2);
console.log("Answer is :", 5 / 2);
console.log("Answer is :", 5 ** 2);


// Comparison (==, >, <) - This will always give boolean answer
console.log("Comparison");
let player1HighScore = 200
let player2HighScore = 700
let player3HighScore = "200"
console.log(player1HighScore == player2HighScore)
console.log(player1HighScore < player2HighScore)
console.log(player1HighScore > player2HighScore)
console.log(player1HighScore == player1HighScore)
console.log(player1HighScore != player2HighScore)

// typeCheckComparison (===) - This ensures that the comparison occurs along with the type checking
console.log("Type Checking and Comparison with '==='");
console.log(player1HighScore == player3HighScore);
console.log(player1HighScore === player3HighScore);
