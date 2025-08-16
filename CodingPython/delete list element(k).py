a = ['a','b','c','d','a','b']
#k = len(a)
i = 0
while i < len(a):#k-2
    if( a[i] in a[i + 1:]):
        a.pop(i)
    else:
        i = i+1    
print(a)        

    