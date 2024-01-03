arr = [1, 2, 3, 3, 4, 4, 5]

s = set()
for i in arr:
    if i not in s:
        s.add(i)
        print(i, end = " ")
        