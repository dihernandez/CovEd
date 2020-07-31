# What is a class? Well, it is a basic building block for Object Oriented Programming

class TestClass:
    def __init__(self, param1, param2):
        self.param1 = param1
        self.param2 = param2

    def getParams(self):
        return (self.param1, self.param2)
    
    def modifyParam1(self, new_value):
        self.param1 = new_value

    def modifyParam2(self, new_value):
        self.param2 = new_value

    # what would happen here? Why?
    # def modifyParam2(new_value):
    #     param2 = new_value


test_object1 = TestClass(0,0)
test_object2 = TestClass("b","c")
print(test_object2) #why do we get this?
print(test_object1.getParams())
test_object1.modifyParam1(1)
test_object1.modifyParam2(3)
print(test_object1.getParams()) #what will this print out?

# what about this?
print(test_object1.param1)
print(test_object1.param2)

#why is getParams better?


