class Employee:
     'Common base class'
     empCount=0

     def __init__(self,name,sal):
          self.name=name
          self.sal=sal
          Employee.empCount+=1

     def displayCount(self):
          print("Total Employee",Employee.empCount)

     def displayEmployee(self):
          print("Name : ",self.name," Salary : ",self.sal)

emp1=Employee("Raj",2000)
emp2=Employee("Sagar",2000)

emp1.displayCount()
emp1.displayEmployee()

#print("Total Employee",Employee.empCount)
#print("Total Employee",emp1.empCount)

#print(hasattr(emp1,'name'))
#setattr(emp1,'age',22)
#print(emp1.age)
#print(delattr(emp1,'age'))
#print(getattr(emp1,'age'))

print(Employee.__doc__)
print("Name",Employee.__name__)
print("Module ",Employee.__module__)
print("Base",Employee.__bases__)
print("Detail ",Employee.__dict__)
