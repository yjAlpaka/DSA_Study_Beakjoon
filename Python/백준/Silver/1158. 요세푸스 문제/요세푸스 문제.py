from collections import deque

n,k = list(map(int, input().split()))
arr=deque(range(1,n+1))
answer=[0 for i in range(n)]
idx=0
while(arr):
    for i in range(k-1):
        arr.append(arr.popleft())
    answer[idx]=arr.popleft()
    idx+=1
print("<",end="")
for i in range(n-1):
    print(answer[i],end=", ")
print(answer[n-1],end=">")