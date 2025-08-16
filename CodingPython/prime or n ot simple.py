# prime or not
n = int(input('enter - '))
k = 0
for i in range(2,n//2):
    if( n % i == 0):
        k = 1
        break
if(k == 0):
    print(f'{n} is prime')
        
        
        