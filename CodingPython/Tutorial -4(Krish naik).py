#aOperators
#Tutorial 4
a = True
b = False
print(type(a))

# string
a = "Aman"
b = "Aman"
print(a==b)
print("The memory location of a is {}".format(id(a))) #means memory mein kidhar point hua h
print("The memory location of b is {}".format(id(b)))
# is vs ==
# == means value mein check karte h
# is means memory mein check karte h
c = "Keju"
d = "Keju"
print(id(c))
print(id(d))
print(c is d)

e=[1,5,4]
f=[1,5,4]
print("The memory location of e is {}".format(id(e)))
print("The ")
print("is e is f {}".format(e is f))# false because memory mein alag alag jaga = True

# more relation comparison operator
a = 18
b = 16
age = int(input("Enter Your age = "))
if age >= b and age <= a:
    print("Yes Teenage year")
elif age >= a    or age <= b:
    print("Enjoy")

 
# basic arithmatic operator
#jo basic maths problem solve , calculation karne ke kaam aate h
# +,-,*
# //(division integer value) 
# /(True division in float format),%(modulo)remainder between 2 numbers after divide
print('The sum of 4 + 2 is {}'.format(4+2))
print('The 6 subtract 4 is {}'.format(6-4))
print('The 5 divide by 2 in float is {}' .format(5/2))
print("The 5 multiple 7 is {}".format(5*7))
print('The integer  value of 7 divide by 2 is {}'.format(7//2))
print('The modulo(Remainder) of 37 divide by 5 is {}'.format(37%5))

# if condition
x = int(input('Enter The  X Value: '))
y = int(input('Enter The Y value: '))
print('The memory location of x is {}'.format(id(x)))
print('The memory location of y is {}'.format(id(y)))
if x == y:
    print("Both x and y are equal")
elif x != y:
    print('Both values are not equal') 
    print('Ha Ha Ha')




