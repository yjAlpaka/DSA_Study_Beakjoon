
n = int(input())
for i in range(n):
    line = input()
    left_stack = []
    right_stack = []
    for j in line:
        if j == "<":
            if left_stack: 
                right_stack.append(left_stack.pop())
            
        elif j == ">":
            if right_stack: 
                left_stack.append(right_stack.pop())

        elif j == "-":
            if left_stack:
                left_stack.pop()

        else:
                left_stack.append(j)
    print(''.join(left_stack) + ''.join(reversed(right_stack)))