## nested if elif statements
age = int(input("Enter the Age:- "))
if(age>18):
 print("You can vote")
elif(age<18):
    print("You are not allowed to vote")
    if(age>15 and age<18):
     print("you are in high school")