class Person:
     def __init__(self,name):
          self.name=name
     def getName(self):
          return self.name
     def isEmployee(self):
          return False

class Employee(Person):
     def isEmployee(self):
          return True

emp=Person("Raj")
print(emp.getName(),emp.isEmployee())

e=Employee("Sagar")
print(e.getName(),e.isEmployee())
