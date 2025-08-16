#for 1 to 100 even and odd sum;
even_sum = 0
odd_sum = 0
for i in range(1,101,1):
 if(i%2 == 0):
     even_sum += i
 elif(i%2 != 0):
     odd_sum += i
print("The Even Number sum is {1} and odd Number sum is {0}".format(odd_sum,even_sum))        