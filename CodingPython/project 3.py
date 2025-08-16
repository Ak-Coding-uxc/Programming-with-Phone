#product stock checker
product_unit = int(input('Enter Amount = '))
if(product_unit == 0):
    print('Out of Stock')
elif(product_unit > 0 and product_unit < 5): # and /&
    print('Few left')
elif(product_unit>= 5):
    print('Available')
