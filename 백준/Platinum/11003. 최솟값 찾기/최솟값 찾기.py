import sys
from collections import deque
n, l=map(int, sys.stdin.readline().split())
dq= deque()
num=list(map(int, sys.stdin.readline().split()))
for i in range(n):
    while(dq and dq[-1][0]>=int(num[i])):
        dq.pop()
    dq.append((int(num[i]),i))
    if(dq[0][1]<=i-l):
        dq.popleft()
    print(dq[0][0],end=" ")