def prod_sum(x,y,z):
    prod = x*y*z
    sum = x + y + z
    print('The sum is {}'.format(sum))
    print("The product is {}".format(prod))
    
a= int(input('Enter a = '))
b = int(input('Enter b = '))
c = int(input('Enter c = '))
prod_sum(a,b,c)
