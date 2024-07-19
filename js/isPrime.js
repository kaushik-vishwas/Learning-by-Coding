let num = "31";
let count = 0;


for (let i = 0; i * i < num; i++) {
    if (num % i == 0) {
        count++;
        if (num / i != i)
            count++;
    }

}
console.log(count);
if (count == 2)
    console.log("This is a Prime Number");
else
    console.log("This is Not Prime Number");