def fun(*kaju):
    print(f'the value is {kaju[3]}')
    print(type(kaju))
fun(1,2,3,4,5)#actual parameter
 # *args(arbitrary argument) used in when we don't know number of values
k = '''hello'''
for i in k:
    print(i)
    
'''means Function ka task poora ho 
jane ke baad control function call
ke aage chala jata h,,,, means
main code mein waapis aa jata h'''
l = 'h e l l o'
print(l.split(' '))# split used in string data type only
# list creation methods are
# 1) Hard-Coded => known values
# 2) split() // seperate values by anything that written in ('___') _____ dash okk=> string
# 3) range() => numbers mein

def fun2(**kk):# arbitrary keyword argument
    print(f'The mother name is {kk["Mother_Name"]}')
    print(type(kk))
fun2(Father_Name = 'Hero' , Mother_Name = 'Kama')   
 


   