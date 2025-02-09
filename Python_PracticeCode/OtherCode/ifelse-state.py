a = int(input("enter your age : "))
print("your age is : ", a)

# these are conditional operators
# < > >= <= == !=
if a > 18:
    print("you can drive")
    print("this is in if bec space is given.")
else:
    print("you cannot drive")
    print("this is in else bec space is given.")

print("this statement is not in else because there is no space.!")
# in python no use of {} instead of that space are used.
# this is called indentation in python.
# in c we do not use anything after condition statement but in python we use : .

# now let's write elif statements
num = int(input("Enter the value of num: "))
if num < 0:
    print("number is negative.")
elif num == 0:
    print("number is zero.")
else:
    print("number is positive.")

# now nested if statements
b = int(input("enter number : "))
if b < 0:
    print("number is negative.")
elif b > 0:
    if b <= 10:
        print("number is between 1-10")
    elif 10 < b <= 20:
        print("number is between 11-20")
    else:
        print("number is grater than 20")
else:
    print("number is zero")

#  Exercise 2
time = float(input("enter time according to 24 hours schedule (like 12.23) : "))
print("your time is : ", time)
if 12.00 > time > 05.00:
    print("Good Morning.!")
elif 18.00 > time > 12.00:
    print("Good afternoon.!")
elif 20.00 > time > 18.00:
    print("Good Evening.!")
else:
    print("Good Night.!")

# Exercise 2 ( 2nd method ) not perfect code.!

import time

timestamp = time.strftime('%H:%M:%S')
print(timestamp)
timestamp1 = int(time.strftime('%H'))
timestamp = int(time.strftime('%M'))
if 12 > timestamp1 > 5:
    print("Good morning..")
elif 6 > timestamp1 > 12:
    print("Good Afternoon..")
else:
    print("Good night..")
