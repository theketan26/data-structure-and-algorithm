arr = [1, 2, 1, 3, 4, 3, 5]

for i in range(1, len(arr) - 1):
    if arr[i - 1] < arr[i] and arr[i] > arr[i + 1]:
        print(arr[i], end = " ")
print(arr[-1])