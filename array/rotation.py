arr = [1, 2, 3, 4, 5]
rotate = 3
new_arr = arr[rotate - 1:] + arr[:rotate - 1]
print(arr)
print(new_arr)