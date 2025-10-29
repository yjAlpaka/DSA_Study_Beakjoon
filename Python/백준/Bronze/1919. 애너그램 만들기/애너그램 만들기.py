arr=[0 for i in range(26)]
answer=0
str=input()
for i in str:
    arr[ord(i)-97]+=1
str=input()
for i in str:
    arr[ord(i)-97]-=1
for i in range(26):
    answer+=abs(arr[i])
print(answer)