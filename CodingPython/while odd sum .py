#while odd number 1 to 100 sum
b = 1
odd_sum = 0
while(b<=100):
 if(b%2 != 0):
     odd_sum += b
 b +=  1
print("The odd numbers sum  from 1 to 100 is    {} and I thik this is correct ".format(odd_sum))   