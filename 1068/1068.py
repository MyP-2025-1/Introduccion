import sys


def solve(line):
    stack = []
    for c in line:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if len(stack) == 0:
                print("incorrect")
                return
            stack.pop()
    if len(stack) == 0:
        print("correct")
    else:
        print("incorrect")


if __name__ == '__main__':
    for x in sys.stdin:
        solve(x)
