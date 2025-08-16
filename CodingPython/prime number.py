#prime number or not
num = int(input("Enter Number: "))
i = 2
flag = 1
while(i<num):
    if(num%i == 0):
       flag = 0 
       break
    i = i + 1   
if(flag == 1) :
    print("yes {} is prime number".format(num))
elif(flag == 0) :
    print("No {} this number is not prime number".format(num))  
   