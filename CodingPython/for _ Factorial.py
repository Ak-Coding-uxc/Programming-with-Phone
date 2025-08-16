num = int(input("Enter The Number:- "))
fact = 1;
for i in range(1,num+1,1):
   fact *= i
print("The Factorial of {} is {}".format(num,fact))    