# tuples are immutable, just like strings, but functioanlly are very similar to lists
mytuple1 = (0,2,2,2,0)
print(mytuple1)
# notice there is no mytuple1.set()
# but we can do 
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
# when you want to use multiple elements in a dictionary key:
mydict1 = {('a',9):"some value", ("b",10):"some other value"}
print(mydict1)
#but this doesn't work:
#mydict1 = {['a',9]:"some value", ["b", 10]:"some other value"}
