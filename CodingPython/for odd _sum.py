# for odd sum
odd_sum = 0
for i in range(1,11,1):
    if(i%2 != 0):
        odd_sum += i
        
print("The number is {}".format(odd_sum))        
