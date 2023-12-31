arr = [1, 2, 3, 4, 5]

l1, l2, l3 = arr[:3]

for i in range(3, len(arr)):
    if l1 < l2 and l1 < l3:
        if arr[i] > l1:
            l1 = arr[i]
    elif l2 < l1 and l2 < l3:
        if arr[i] > l2:
            l2 = arr[i]
    else:
        if arr[i] > l3:
            l3 = arr[i]

print(arr)
print(l1, l2, l3)