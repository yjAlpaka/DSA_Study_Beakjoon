import sys
from collections import deque
n=int(sys.stdin.readline())
arr= deque()
for i in range(1,n+1):
    arr.append(i)
while(len(arr)>1):
    arr.popleft()
    arr.append(arr.popleft())
print(arr[0])