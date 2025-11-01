import sys
n=int(input())
stack= []
answer=[]
count=1
num=list(map(int,sys.stdin.readline().split()))
for i in num:
    while(stack and stack[-1][0]<i):
        stack.pop()
    if(not stack):
        answer.append(0)
    else:
        answer.append(stack[-1][1])
    stack.append((i,count))
    count+=1

print(*answer)