arr = [1, 2, 3, 4, 5]

print(arr)

for i in range(1, len(arr) - 1, 1):
    if arr[i - 1] > arr[i] and arr[i] < arr[i + 1]:
        if arr[i - 1] < arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
        else:
            arr[i], arr[i - 1] = arr[i - 1], arr[i]
    elif arr[i - 1] > arr[i]:
        arr[i], arr[i - 1] = arr[i - 1], arr[i]
    elif arr[i + 1] > arr[i]:
        arr[i], arr[i + 1] = arr[i + 1], arr[i]

print(arr)