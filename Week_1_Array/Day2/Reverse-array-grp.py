from array import *

N = 5
K = 3
temp=0
arr=array("i",[1,2,3,4,5])
for i in range(0,N,K-1):
    temp=arr[i]
    arr[i]=arr[(K-1)]
    arr[(K-1)]=temp

for i in arr:
    print(i,end=" ")

