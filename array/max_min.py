arr = [1, 2, 3, 4, 5]
new_arr = []

flag = True
mx, mn = len(arr) - 1, 0
for i in range(len(arr)):
    if flag:
        new_arr.append(arr[mx])
        mx -= 1
    else:
        new_arr.append(arr[mn])
        mn += 1
    flag = not flag

print(arr)
print(new_arr)
