function capitalize(str) {
    var newStr = str.split(" ").map(function (word) {
        return word.charAt(0).toUpperCase() + word.substr(1)
    })
    return newStr.join(" ");

}
console.log(capitalize("hello kaushik kaise ho"));