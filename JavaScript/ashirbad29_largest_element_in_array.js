// program to find the largest number in a array
const array = [4, 5, 1, 7, 8, 10, 2];

// Approach : 1
// the traditional for loop
let max1 = 0;
for (let i = 0; i < array.length; i++) {
	if (array[i] > max1) {
		max1 = array[i];
	}
}
console.log(max1); //10

// Approach : 2
// using array reduce method
let max2 = array.reduce((max, curr) => (max = Math.max(max, curr)));
console.log(max2);
