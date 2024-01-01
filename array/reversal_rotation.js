var arr = [1, 2, 3, 4, 5], rotate = 2;
arr.reverse()

var new_arr1 = arr.slice(0, rotate);
var new_arr2 =  arr.slice(rotate);

new_arr1.reverse();
new_arr2.reverse();

var new_arr = new_arr1.concat(new_arr2);

console.log(arr);
console.log(new_arr);
