a = 9
b = 8
gmean1 = (a * b) / (a + b)
print(gmean1)

c = 8
d = 7
gmean2 = (c * d) / (c + d)
print(gmean2)


# but in function 3
def calculategmean(p, q):
    mean = (p * q) / (p + q)
    print(mean)


# use of function more example.

def isequal(o, s):
    if o > s:
        print("First number is greater.")
    else:
        print("second is greater.")


e = 9
f = 8
calculategmean(e, f)
isequal(e, f)

g = 8
h = 7
calculategmean(g, h)
isequal(g, h)
str = ["dhara", "bhavik", "karan", "hardik"]


def lists(list):
    for item in list:
        print(item, end=" ")


print(lists(str))


# recursion
def show(n):
    if(n==0):
        return
    print(n)
    show(n-1)
    print("end")  # call stack


show(5)


def fact(n):
    if n == 0 or n == 1 :
        return 1
    else:
        return n * fact(n-1)


print(fact(5))
