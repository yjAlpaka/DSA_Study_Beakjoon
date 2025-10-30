import sys
input = sys.stdin.readline
left_stack = list(input().strip()) 
right_stack = []
n = int(input())
for _ in range(n):
    line = input().split()
    com = line[0]

    if com == "L":
        if left_stack: 
            right_stack.append(left_stack.pop())
            
    elif com == "D":
        if right_stack: 
            left_stack.append(right_stack.pop())

    elif com == "B":
        if left_stack:
            left_stack.pop()

    elif com == "P":
        letter = line[1]
        left_stack.append(letter)

print(''.join(left_stack) + ''.join(reversed(right_stack)))