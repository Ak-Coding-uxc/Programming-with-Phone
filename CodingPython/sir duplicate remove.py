a=[1,2,1,4,2,6,4,7,7]
i=0
while(i<len(a)):

  print (len(a))

  print(i)

  print (a)

  if a[i] in a[i+1:]:

    a.remove(a[i])

  else:

    i=i+1

print (a) 