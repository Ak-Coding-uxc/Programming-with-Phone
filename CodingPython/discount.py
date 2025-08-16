# price after discount
original_price = int(input('Enter original price: '))
discount = int(input('Enter Discount: '))
pad = original_price - original_price * discount/100
print(f'The price after {discount}% discount is: {pad}')