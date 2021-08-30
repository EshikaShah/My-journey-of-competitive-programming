'''
Program to Check if a string is a valid shuffle of two distinct strings
In this example, we will check if a string is the valid shuffle of two other strings
'''
def shuffle(s1, s2, s):
    a = list(s1+s2)
    s = list(s)
    a.sort()
    s.sort()
    if(a==s):
        return True
    else:
        return False
    
print(shuffle("XY","12","1XY2"))
