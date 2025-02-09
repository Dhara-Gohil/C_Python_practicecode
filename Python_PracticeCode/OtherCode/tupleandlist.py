# tuple
tup = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)  # tuples write in () in this format

# tuple methods

a = tup.index(5)
b = tup.count(6)

print(a, b)

for i in range(0, 3):
    a = input("enter yr fav movie : ")
    tup += (a,)
print(tup)

# list
my_list = [1,"dhara",100]
my_list.append("2")
my_list.count("dhara")
my_list.remove(1)
print(my_list)
