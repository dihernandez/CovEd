
# Object Oriented Programming
# What is an object?
# what is inheritence

# What is a class? Well, it is a basic building block for Object Oriented Programming

class SimpleParent:
    def __init__(self, a):
        self.a = a

    def print_a(self):
        print(self.a)

class SimpleChild(SimpleParent):
    pass

parent = SimpleParent(10)
child = SimpleChild(8)

parent.print_a()
child.print_a()

class OverloadingParent:
    def __init__(self,a,b):
        self.a = a
        self.b = b

    def print_a_b(self):
        print(self.a,self.b)
    
    def in_parent(self):
        print("This method is in parent")

class OverloadingChild(OverloadingParent):
    def __init__(self,a,b,c):
        OverloadingParent.__init__(self, a,b) # what is this line doing?
        self.c = c

    def print_a_b_c(self):
        print(self.a,self.b, self.c)

    def in_parent(self):
        print("this message is in child")

overloading_parent = OverloadingParent(8,2)
overloading_child = OverloadingChild(8,2,3)
overloading_parent.in_parent()
overloading_child.in_parent() # why does this work?

overloading_parent.print_a_b()
overloading_child.print_a_b_c()

class Base1:
    def __init__(self):
        self.a = "a"
        self.b = "b"
    def print_self(self):
        print(self.a, self.b)

class Base2:
    def __init__(self):
        self.d = "d"
        self.c = "c"
    def print_self(self):
        print(self.c, self.d)

class MultipleInheritance(Base1, Base2):
    def __init__(self):
        Base1.__init__(self)
        Base2.__init__(self)
    def print_self(self):
        print(self.a, self.b, self.c, self.d)

multiple_inheritance = MultipleInheritance()
multiple_inheritance.print_self()