# class student:
#     clg = "gec bvn"  # attribute directly call by class
#
#     def __init__(self, branch):
#         self.branch = branch
#         print("this is constructor")
#
#     name = "Dhara gohil"
#     sub = "Paython"
#
#     def welcome(self):
#         print("welcome to gec bvn",s1.name)
#
#
# s1 = student("IT")
# print(s1.name)
# print(s1.sub)
# print(s1.branch)
# s2 = student("IT")
# print(s2.branch)
# print(student.clg)
#
# #  Methods
# s1.welcome()


class Account:
    def __init__(self, bal, acc):
        self.balance = bal
        self.account_no = acc

    def debit(self, amount):
        self.balance -= amount
        print("Rs.", amount, "was debited")
        print("total balance ", self.get_balance())

    def credit(self, amount):
        self.balance += amount
        print("Rs.", amount, "was credited")
        print("total balance ", self.get_balance())

    def get_balance(self):
        return self.balance


acc1 = Account(10000, 12345)
acc1.debit(500)
acc1.credit(200)
