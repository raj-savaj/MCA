class Parent:
     parentAttr=100
     def __init__(self):
          print("Calling Parent Cionstructor")
     def pritnMethod(self):
          print("Calling parent method")
     def setAttr(self,attr):
          Parent.parentAttr=attr

     def getAttr(self):
          print("Parent Attribute :",Parent.parentAttr)


class Child(Parent):
     def __init__(self):
          super().__init__()
          print("calling child constructor")
     def childMethod(self):
          print("Calling Child Method")


c=Child();
c.childMethod()
c.pritnMethod()
c.setAttr(200)
c.getAttr()
