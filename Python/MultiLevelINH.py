class Base():
     def __init__(self,name):
          self.name=name

     def getName(self):
          return self.name


class Child(Base):
     def __init__(self,name,age):
          Base.__init__(self,name)
          self.age=age

     def getAge(self):
          return self.age

class GrandChild(Child):
     def __init__(self,name,age,address):
          Child.__init__(self,name,age)
          self.address=address

     def getAddress(self):
          return self.address


ob=GrandChild("Rakj",18,"Raj");
print(ob.getName(),ob.getAge(),ob.getAddress())
     
c=Child("Kumar",22)
print(c.getName(),c.getAge())

b=Base("Sagar")
print(b.getName())
