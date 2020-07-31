# tuples are immutable, just like strings, but functioanlly are very similar to lists
mytuple1 = (0,2,2,2,0)
print(mytuple1)
# notice there is no mytuple1.set()
# but we can do 
mylist1 = [0,2,2,2,0]
mylist1.extend([0,2,2,2,0])

print(mylist1)
mytuple1 = mytuple1 + mytuple1
#what do you think this will do?
print(mytuple1)

mytuple2 = ("a", "j", 9.8)

print(mytuple1 + mytuple2)

print("a" in mytuple2)

for element in mytuple2 + mytuple1:
    print(element)

#just like lists
print("-------------------------------indexing into ", mytuple2)
print(mytuple2[-3])
print(mytuple2[::-1])

del mytuple1 # what do you expect to happen if I run print(mytuple1) ?# 

#why use tuples? They are faster 
# when you want to use multiple elements in a dictionary key: since keys must be immutable
mydict1 = {('a',9):"some value", ("b",10):"some other value"}
print(mydict1)
#but this doesn't work:
#mydict1 = {['a',9]:"some value", ["b", 10]:"some other value"}

# packing and unpacking
def some_function():
    var1 = 0
    var2= "A"
    var3 = 9.0
    return (var1, var2, var3)
outside_var1, outside_var2, outside_var3 = some_function()
print(outside_var1, outside_var2, outside_var3)


# where have we seen this before?
print("-----------------dict example--------------")
mydict2 = {1:'a', 2:'b', 3:'c'}

for key, value in mydict2.items():
    print(key, value)
print("-----------------list example--------------")
mylist1 = ["j","k", "l"]
for index, value in enumerate(mylist1):
    print(index, value)
