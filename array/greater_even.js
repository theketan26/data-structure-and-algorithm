var arr = [1, 2, 3, 4, 5];

console.log(arr);

for (let i = 1; i < arr.length - 1; i += 2) {
    if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i]) {
        if (arr[i - 1] > arr[i + 1]) {
            [arr[i - 1], arr[i]] = [arr[i], arr[i - 1]];
        } else {
            [arr[i + 1], arr[i]] = [arr[i], arr[i + 1]];
        }
    } else if (arr[i - 1] > arr[i]) {
        [arr[i - 1], arr[i]] = [arr[i], arr[i - 1]];
    } else if (arr[i + 1] > arr[i]) {
        [arr[i + 1], arr[i]] = [arr[i], arr[i + 1]];
    }
}

console.log(arr);