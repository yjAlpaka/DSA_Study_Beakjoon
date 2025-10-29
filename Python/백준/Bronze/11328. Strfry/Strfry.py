n=int(input())
arr=[0 for i in range(26)]
a=''
b=''
for i in range(n):
    answer=True
    a, b=input().split()
    for j in a:
        arr[ord(j)-97]+=1
    for j in b:
        arr[ord(j)-97]-=1
    for j in range(26):
        if(arr[j]!=0):
            answer=False
            arr[j]=0
    if(answer):
        print("Possible")
    else:
        print("Impossible")