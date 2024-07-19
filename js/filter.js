let ArrOfObj = [{ name: "kaushik", age: 24 },
{ name: "Rafi", age: 24 },
{ name: "Kaushik", age: 42 },
{ name: "Sobhna", age: 26 },
{ name: "Vikas", age: 31 },
{ name: "Piyushi", age: 18 },
{ name: "Kritagya", age: 20 }
]
let newArr = ArrOfObj.filter(function (elem) {
    return elem.age >= 20 && elem.age < 30;

}).filter(function (item) {
    return elem.name.charAt[0] == "K"
});
console.log(newArr);