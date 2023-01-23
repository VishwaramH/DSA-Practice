# TCS CODEVITA
number = int(input())
divisors = list()
for i in range(1,int(number**0.5)+1):
    if(number%i==0):
        print(i,end=" ")
        if(number/i!=i):
            divisors.append(int(number/i))
divisors.sort()
print(*divisors,end=" ")