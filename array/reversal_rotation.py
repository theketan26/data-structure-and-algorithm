arr = [1, 2, 3, 4, 5]
rotate = 2
arr = list(reversed(arr))
new_arr = list(reversed(arr[:rotate + 1])) + list(reversed(arr[rotate + 1:]))
print(new_arr)
