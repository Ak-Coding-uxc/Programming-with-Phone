l = ([int(input('Enter Numbers: '))for i in range(6)])
m = int(input('Enter : '))
t = 0
for i in l:
    if(m == i):
        t +=1
print(f'Total {m} is {t}')
    