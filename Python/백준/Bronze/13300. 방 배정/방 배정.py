n, k= list(map(int,input().split()))
answer=0
arr=[[0 for j in range(2)] for i in range(6)]
for i in range(n):
    gender, grade=list(map(int,input().split()))
    arr[grade-1][gender]+=1

for i in range(6):
    for j in range(2):
        if(arr[i][j]%k!=0):
            answer+=int((arr[i][j]+k)/k)
        else:
            answer+=int(arr[i][j]/k)
print(answer)