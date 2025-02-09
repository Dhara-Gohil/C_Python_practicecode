# del keyword
# this is use to delete any object
# syntax ->  del s1.name

class Account:
    def __init__(self, accno, accpass):
        self.accno = accno
        self.__accpass = accpass  # 2 underscore use to make this element private same way to make private Methods.


a1 = Account(12345, "abcd")
print(a1.accno)


# print(a1.accpass) this will throw error

# Inheritance

class car:
    @staticmethod
    def start():
        print("car is started..")

    @staticmethod
    def stop():
        print("car is stopped..")


class toyota(car):
    def __init__(self, name):
        self.name = name


car1 = toyota("fortuner")
car2 = toyota("prius")

print(car1.start())  # we can use method od parent class in child class objects.


class person:
    name = "none"

    # def change_name(obj,name):
    # self.__class__.name = "dhara"
    @classmethod  # to access class obj directly
    def change_name(cls, name):
        cls.name = name


p1 = person()
p1.change_name("karan")
print(p1.name)
print(person.name)


class student:
    def __init__(self, phy, che, math):
        self.phy = phy
        self.che = che
        self.math = math

    @property  # use to change data that interconnected like marks are connected with per , if we change marks per
    # should be changed.
    def percentage(self):
        return str((self.phy + self.che + self.math) / 3) + "%"


st1 = student(98, 99, 98)
print(st1.percentage)
st1.phy = 85
print(st1.percentage)


class Book:
    def __init__(self, title, author, pages):
        self.title = title
        self.author = author
        self.pages = pages

    # Overriding the __add__ method to add the pages of two books
    def __add__(self, other):
        return self.pages + other.pages

# Creating two Book objects
book1 = Book("1984", "George Orwell", 328)
book2 = Book("Brave New World", "Aldous Huxley", 268)

# Adding the two books together using the + operator
total_pages = book1 + book2

print(f"Total pages in both books: {total_pages}")

