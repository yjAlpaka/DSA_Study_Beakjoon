n= int(input())
answer=0
arr=list(map(int,input().split()))
v=int(input())
for i in range(n):
    if arr[i] == v:
        answer+=1
print(answer)