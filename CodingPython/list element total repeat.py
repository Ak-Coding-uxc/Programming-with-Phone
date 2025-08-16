# k elements repeat time
k = [1,5,6,5,5,6,6,52,2,4]
m=0
s = set(k)

for i in s:
    m=0
    for j in k:
        if (i==j):
            m = m + 1;
    print(f'{i} = {m}')
            
        
    