arr = [1, 2, 0, 3, 0, 4, 5]

new_arr = []
for i in arr:
    if i != 0:
        new_arr.append(i)

new_arr = new_arr + [0] * (len(arr) - len(new_arr))

print(arr)
print(new_arr)