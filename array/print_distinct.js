var arr = [1, 2, 3, 3, 4, 4, 5];

var new_arr = [];
var set = new Set();
for (let i in arr) {
    if (!set.has(arr[i])) {
        set.add(arr[i]);
        new_arr.push(arr[i]);
    } 
}

console.log(new_arr);