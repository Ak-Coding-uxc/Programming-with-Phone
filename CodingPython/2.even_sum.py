#even sum
i = 1
even_sum = 0
while(i<=10):
    if(i%2 == 0):
      even_sum = even_sum + i
    i = i + 1  
print("The sum of even numbers is {}".format(even_sum))        