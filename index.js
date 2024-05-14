console.log("hello world");

let name = "Mansi";
console.log(name);

//Cannot be a reseved keyword
//Should be meaningful
//Cannot start with number(1name)
// Cannot contain a space or hyphen
// Are case sensitive
//
let interestRate = 0.3;
interestRate = 1;
console.log(interestRate);

let isApproved = "true";
let firstName = "Mansi";
let lastName = "null";

let person = {
  name: "Mansi",
  age: 18,
};

person.name = "Mansi";
person["name"] = "vjdvndj";
console.log(person.name);

let selectedColors = ["red", "blue"];
selectedColors[2] = "green";
console.log(selectedColors);

function greet(name) {
  console.log("hello" + name);
}

greet("John");

function square(number) {
  return number * number;
}

console.log(square(3));
