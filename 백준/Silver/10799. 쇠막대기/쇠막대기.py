import sys
str=sys.stdin.readline().strip()
answer=0
n=0
before=False
for i in str:
    if i=='(':
        n+=1
        before=True
    else:
        n-=1
        if before:
            answer+=n
        else:
            answer+=1
        before=False
print(answer)
