# loops -> while / for
# for loop
lists = ['a', 'b', 'c', 'd']
k = len(lists)
print(k)
print(type(k))
print(f'k is {type(k)}')

i = 0
while i < k:
 print(lists[i])
 i += 1

print('\n\n')

for lit in lists:  # Changed 'list' to 'item' to avoid conflict with the built-in 'list'
    print(lit)

print('\n\n\n')
#l = range(0, 25, 2)
my_list = list(range(0,25,5))
for m in my_list:
    print(m)
#Define the list of letters
letters = ['a','b','c']

#Use a for loop to work with each letter
for letter in letters:
 print(letter)
 print(letters)  
 print('\n\n')  
ka = [1,2,3,3,5,5,6]
print(ka[0:4]) # slicing 
print(ka) 
print(len(ka))
print(list(ka))
ll = {'a',1,1.23,2}
print(ll)
    