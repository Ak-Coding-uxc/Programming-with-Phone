# Recursion Factorial
def refact(n):
    if(n==1):
        return 1
    p =  n * refact(n-1)
    return p
n = int(input('Enter Number= '))
print(refact(n))   
