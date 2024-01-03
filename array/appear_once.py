arr = [1, 1, 2, 2, 3, 4, 5, 5]

s, o = set(), set()

for i in arr:
    if not i in s:
        if not i in o:
            s.add(i)
            o.add(i)
    else:
        if i in o:
            o.remove(i)

print(o)
