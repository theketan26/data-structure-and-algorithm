var arr = [1, 2, 3, 4, 5]

var l1 = arr[0], l2 = arr[1], l3 = arr[2]

for (let i = 3; i < arr.length; i ++) {
    if (l1 < l2 && l1 < l3) {
        if (arr[i] > l1) {
            l1 = arr[i];
        }
    }
    else if (l2 < l1 && l2 < l3) {
        if (arr[i] > l2) {
            l2 = arr[i];
        }
    }
    else {
        if (arr[i] > l3) {
            l3 = arr[i];
        }
    }
}

console.log(arr);
console.log(l1, l2, l3);