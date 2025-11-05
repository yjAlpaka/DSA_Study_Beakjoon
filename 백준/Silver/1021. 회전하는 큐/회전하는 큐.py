import sys
from collections import deque
n, m=sys.stdin.readline().split()
dq= deque()
answer=0
num=sys.stdin.readline().split()
for i in range(1,int(n)+1):
    dq.append(i)
for i in num:
    while(dq[0]!=int(i)):
        if(dq.index(int(i))<=(len(dq)//2)):
            dq.rotate(-1)
            answer+=1
        else:
            dq.rotate(1)
            answer+=1
    dq.popleft()
print(answer)