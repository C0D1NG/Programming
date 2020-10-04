// Write a program to find the lowest common multiple of two numbers.
const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Please enter first number >>> ", function(n1) {
    rl.question("Please enter second number >>> ", function(n2) {
        lowestMultiple(n1,n2);
        if(commonNumbers.length == 0){
            console.log("Sorry no common lowest multiple found.\n (TnT)")
        }
        else{
            console.log(`Lowest Common Multiple of ${n1} and ${n2} are : ${commonNumbers}`);
        }
        rl.close();
    });
});

rl.on("close", function() {
    console.log("\nThank You (^w^)/");
    process.exit(0);
});

let n1Multiples = [];
let n2Multiples = [];
let commonNumbers = [];

function lowestMultiple(n1,n2){
    for(i=0;i<10;i++){
        n1current = n1 * i;
        n1Multiples.push(n1current);
        n2current = n2 * i;
        n2Multiples.push(n2current);
    }
    check();
}

function check(){
    for(i in n1Multiples){
        for(j in n2Multiples){
            if(n1Multiples[i]==n2Multiples[j]){
                commonNumbers.push(n1Multiples[i]);
                break;
            }
        }
    }
}
