var str = "saare jaha se achha hindustaan hamara";

var newStr = str.split(" ").map(function (word) {
    return word.split("").reverse().join("")
});

console.log(newStr.join(" "));