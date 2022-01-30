'''
Calculate square of a number without using *, / and pow()

Given an integer n, calculate the square of a number without using *, / and pow().
'''

# method 1
def square(n):
    sum = 0
    x = 1
    for i in range(n):
        sum += x 
        x += 2
    return sum
  
# method 2
def square(n):
    if (n == 0):
        return 0
    if (n < 0):
        n = -n
    x = n >> 1
    if (n & 1):
        return ((square(x) << 2) + (x << 2) + 1)
    else:
        return (square(x) << 2)
