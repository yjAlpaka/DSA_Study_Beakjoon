import sys
n=int(sys.stdin.readline())
arr=[]
answer=0
for i in range(n):
    count=1
    num=int(sys.stdin.readline())
    while(arr and arr[-1][0]<num):
        answer+=arr[-1][1]
        arr.pop()
    if(arr and arr[-1][0]==num):
        answer+=arr[-1][1]
        count+=arr[-1][1]
        arr.pop()
    if(arr):
        answer+=1
    arr.append([num,count])
print(answer)