import sys
from collections import deque
n=int(sys.stdin.readline())
arr= deque()
for i in range(n):
    com=sys.stdin.readline().split()
    if(com[0]=="push"):
        arr.append(int(com[1]))
    elif(com[0]=="pop"):
        if(arr):
            print(arr.popleft())
        else:
            print(-1)
    elif(com[0]=="size"):
        print(len(arr))
    elif(com[0]=="empty"):
        if(arr):
            print(0)
        else:
            print(1)
    elif(com[0]=="front"):
        if(arr):
            print(arr[0])
        else:
            print(-1)
    elif(com[0]=="back"):
        if(arr):
            print(arr[-1])
        else:
            print(-1)