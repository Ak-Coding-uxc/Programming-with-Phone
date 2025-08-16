print('DICTIONARIES\n\n')
d1 = {'a' : 10,'b' : 50, 'c' : 68}
print('Keys items')
for i,j in d1.items():
    print(i,j)
print('''\n both in insertion manner
      with commas''')    
for i in d1.items():
    print(i)
print('\n\nOnly Keys')     
for i in d1:
    print(i) 
print('\n\nonly Keys')    
for k in d1.keys():
    print(k) 
print('\n\n Only values')            
for v in d1.values():
    print(v)  
       