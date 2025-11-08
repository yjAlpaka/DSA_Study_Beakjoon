import sys
while(True):
    st=[]
    answer=True
    str=sys.stdin.readline()
    str=str.rstrip('\n')
    if(str=='.'):
        break
    for i in str:
        if(i=='('):
            st.append(1)
        elif(i=='['):
            st.append(2)
        elif(i==')'):
            if(not st or st[-1]!=1):
                answer=False
                break
            st.pop()
        elif(i==']'):
            if(not st or st[-1]!=2):
                answer=False
                break
            st.pop()
    if(not answer or st):
        print("no")
    else:
        print("yes")
