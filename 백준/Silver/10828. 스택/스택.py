import sys
stack=[]
n=int(input())
for i in range(n):
    line=sys.stdin.readline().split()
    if(line[0]=="push"):
        stack.append(line[1])
    elif(line[0]=="pop"):
        if(stack):
            print(stack.pop())
        else:
            print(-1)
    elif(line[0]=="size"):
        print(len(stack))
    elif(line[0]=="empty"):
        if(stack):
            print(0)
        else:
            print(1)
    elif(line[0]=="top"):
        if(stack):
            print(stack[len(stack)-1])
        else:
            print(-1)