# price after discount
original_price = float(input('Enter original price: '))
discount = float(input('Enter Discount: '))
discount_price = discount/100 * original_price
pad = original_price - discount_price
print(f'The price after {int(discount)}% discount is: {(pad)}')