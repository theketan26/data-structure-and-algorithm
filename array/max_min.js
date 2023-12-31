var arr = [1, 2, 3, 4, 5];

var min = 0, max = arr.length - 1, flag = true;
var new_arr = [];
for (let i in arr) {
    if (flag)
        new_arr.push(arr[max --]);
    else
        new_arr.push(arr[min ++]);
    flag = !flag;
}

console.log(arr);
console.log(new_arr);