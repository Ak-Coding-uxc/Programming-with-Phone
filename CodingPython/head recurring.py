#headprint
def refact(n):
    if(n==0):
        return 
    else:
        refact(n-1)
    print(n)        

refact(10)