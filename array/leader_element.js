var arr = [1, 2, 1, 3, 4, 2, 5];

var new_arr = [];
for (let i = 1; i < arr.length - 1; i ++) {
    if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
        new_arr.push(arr[i]);
    }
}
new_arr.push(arr[arr.length - 1]);

console.log(new_arr);