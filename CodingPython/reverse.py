#reverse -> 436 - 634
n = int(input('Enter Number ='))
r = 0
while(n>0):
    r = n%10 + r*10
    n = n//10
print(r)    

