import sys
n=int(sys.stdin.readline())
answer=[-1 for i in range(n)]
arr=[]
num=list(map(int,sys.stdin.readline().split()))
for i in range(n):
    while(arr and arr[-1][0]<num[i]):
        answer[arr[-1][1]]=num[i]
        arr.pop()
    arr.append([num[i],i])
print(*answer)