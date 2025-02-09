x = int(input("enter the value of X : "))
# x is the variable to match.
match x:
    case 0:
        print("x is zero")
    case 4:
        print("x is 4")
    case _ if x != 90:  # we can use if-else in match statements.
        print(x, "is not 90")
    case _ if x != 80:
        print(x, "is not 80")
    case _:
        print(x)

# in c language there is switch statements. In that we must use break for exit but in match break is not necessary.
