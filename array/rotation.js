var arr = [1, 2, 3, 4, 5]
var rotate = 3

var new_arr = arr.slice(rotate - 1).concat(arr.slice(0, rotate -1))

console.log(arr)
console.log(new_arr)