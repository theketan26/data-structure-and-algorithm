var arr = [3, 4, 2, 5, 1];

var i = 0;
while (i < arr.length) {
    let correct = arr[i] - 1;
    if (i === correct) {
        i ++;
    } else {
        [arr[i], arr[correct]] = [arr[correct], arr[i]];
    }
}

console.log(arr);
