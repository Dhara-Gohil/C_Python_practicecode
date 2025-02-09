# in python 2 loops are there for and while.
name = "Dhara"
for i in name:
    print(i)
    if i == "a":
        print("special character..")

colours = ["red", "green", "blue", "yellow"]
for colour in colours:
    print(colour)
    for i in colour:
        print(i)

# range !
for k in range(5):  # python start from 0 and got to n-1.
    print(k)
print("first complete")

for k in range(1, 51):
    print(k)
print("second complete")

for k in range(1, 12, 3):
    print(k)

# pass is a null statement that does nothing. It is used as a placeholder for future code.
