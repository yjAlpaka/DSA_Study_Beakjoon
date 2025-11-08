import sys
n=int(sys.stdin.readline())
for i in range(n):
    ok=True
    st=[]
    str=sys.stdin.readline()
    str=str.rstrip()
    for j in str:
        if(st and st[-1]!=j):
            st.pop()
        elif(not st and j==')'):
            ok=False
        else:
            st.append(j)
    if(st):
        ok=False
    if(ok):
        print("YES")
    else:
        print("NO")