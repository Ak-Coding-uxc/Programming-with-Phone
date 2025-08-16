# 2 to n prime number
num = int(input("Enter Your Number:- "))
if(num==0 or num==1):
    print('Neither Composite nor Prime')
else:
    for i in range(2,num + 1):
        #k = i
        for j in range(2,i):
            if (i % j == 0):
                print(f' The {i} is prime.')
                
        
    