arr = [3, 2, 4, 1, 5]

i = 0
while i < len(arr):
    correct = arr[i] - 1
    if correct == i:
        i += 1
    else:
        arr[i], arr[correct] = arr[correct], arr[i]

print(arr)