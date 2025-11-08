import sys
answer=0
n=int(sys.stdin.readline())
for i in range(n):
    st=[]
    str=sys.stdin.readline()
    for j in str:
        if(st and st[-1]==j):
            st.pop()
        elif(j=='A' or j=='B'):
            st.append(j)
    if(not st):
        answer+=1
print(answer)