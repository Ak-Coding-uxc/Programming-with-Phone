def count_lower_upper(kar):
    b = 0
    s = 0
    for char in kar:
        if(char.isupper()):
            b = b + 1
        elif(char.islower()):
            s = s + 1
    print(f'The upper letter in {name} are {b}')
    print(f'The lower letter in{name} are {s}')      
        
    
 

name = input('Enter string : ')
count_lower_upper(name)