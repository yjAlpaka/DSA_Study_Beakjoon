import sys
n=int(sys.stdin.readline())
answer=0
arr=[]
for i in range(n):
    num=int(sys.stdin.readline())
    while(arr and arr[-1]<=num):
        arr.pop()
    if(arr):
        answer+=len(arr)
    arr.append(num)
print(answer)