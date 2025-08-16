#sets touple and list
a = (1,2,3,3,4)
print(a)
#k = set(a)
#print(k)
a =(1,5,6,7,8,8,9)
p = list(a)
print(a)
print(p)
q = set(p)
print(q)
l = {(1,2,3,3,5,5,6),'Hello Wold','picock','Tiger'}
print(l)
m ={'q',1,2,3,4,5,6}
for enu in m:
    print(enu)
print('\n\n')    
s = {12, 15, 12 , 23, 22, 16, 17}
#dublicate not allow in set
print('list elements are => ')
for e in s :
   print(e)  
print('\n\n')   
print(f'sum is {sum(s)}')
print(f'len is {len(s)}')
print(f'max is {max(s)}')
print(f'min is {min(s)}')
print(any(s))
print(12 in s)
print(87 in s)
s.add(88)
print(s)

    

