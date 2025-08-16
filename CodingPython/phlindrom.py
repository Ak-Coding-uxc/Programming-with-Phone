# phlindrom
k = input('Enter String = ')
i = 0
j = len(k)-1
bool = 1
#print(i)
#print(j)
while(i<=j):
    if(k[i] == k[j]):
        i = i+1
        j = j-1
    else:
        bool = 0
        break
if(bool == 1):
    print('yes')
else:
    print('No')
        