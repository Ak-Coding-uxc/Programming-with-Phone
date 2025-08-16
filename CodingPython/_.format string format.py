#for even and odd sum
lst = [1,2,3,4,5,6,7,8,9]
even_sum = 0
odd_sum = 0
for i in lst:
    if     (       i     %2 == 0):
        even_sum+= i
    elif(i%2 != 0)       :
        odd_sum += i
print("even sum is {} and odd sum is {}".format(even_sum,odd_sum))
    
