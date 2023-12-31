var arr = [1, 2, 0, 3, 0, 4, 5];

var new_arr = [];

for (let i = 0; i < arr.length; i ++) {
    if (arr[i] != 0) {
        new_arr.push(arr[i]);
    }
}

for (let i = new_arr.length; i < arr.length; i ++) {
    new_arr[i] = 0;
}

console.log(arr);
console.log(new_arr);
