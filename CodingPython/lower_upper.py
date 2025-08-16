def count_lower_upper(name):
 b = 0
 s = 0
 for char in name:
     if(char.isupper()):
        b +=1
     elif(char.islower()):
        s +=1
 print('big letters are {}'.format(b)) 
 print('small letters are {}'.format(s))       
 

name = input('Enter = ')
count_lower_upper(name)