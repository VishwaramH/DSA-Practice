# TCS CODEVITA
from itertools import permutations
value,compare = input().split()
compare = int(compare)
a = str(value)
a = sorted(a)
a = ''.join(a)
b = str(compare)
if len(a)<len(b):
    print(-1)
else:
    result = -1
    permlist = permutations(a)
    for i in list(permlist):
        n = int(''.join(i))
        if(n>compare):
            result = n
            break
    print(result)

