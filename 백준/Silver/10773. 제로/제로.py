import sys
stack=[]
n=int(input())
answer=0
for i in range(n):
    num=int(sys.stdin.readline())
    if(num!=0):
        stack.append(num)
    else:
        stack.pop()
while(stack):
    answer+=stack.pop()
print(answer)