#for even and odd sum
lst = [1,2,3,4,5,6,7,8,9]
even_sum = 0#20
odd_sum = 0#25
for i in lst:
    if     (       i     %2 == 0):
        even_sum+= i
    elif(i%2 != 0)       :
        odd_sum += i
print("even sum is {1} and odd sum is {0}".format(odd_sum,even_sum))
    
