def compute(n):
    target = 1
    value = 0
    for i in range(5):
       target = target*n
       value += target
    print(f'The value is {value}')
n = int(input('Enter Number= '))
compute(n)    