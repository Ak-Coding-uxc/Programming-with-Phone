a = ['a','b','c','d','a','b']
i = 0
while i < len(a):
    if( a[i] in a[i + 1:]):
        a.pop(i)
    else:
        i = i+1    
print(a)        

    