var arr = [1, 1, 2, 2, 3, 4, 5, 5];

var set = new Set();
var once = new Set();

for (let i of arr) {
    if (!set.has(i)) {
        if (!once.has(i)) {
            set.add(i);
            once.add(i);
        }
    } else {
        if (once.has(i)) {
            once.delete(i);
        }
    }
}

console.log(once);