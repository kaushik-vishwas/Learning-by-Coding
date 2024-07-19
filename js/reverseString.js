let num = 123456789;
let reverseString = 0;


while (num > 0) {
    var lastDigit = num % 10;
    reverseString = (reverseString * 10) + lastDigit;
    num = Math.floor(num / 10);
    console.log(num);
}
console.log(reverseString);

