# what if we want to name a function as a variable??

myfunc1 = lambda x : x**2

print(myfunc1(9))

mylist = [("a", 1) ,("b", 3),("f", 5),("p", 32),("a", 21),("d", 8)]
# what will this do?
print(sorted(mylist, key = lambda x: x[0]))
# what about this?
print(sorted(mylist, key = lambda x: x[1]))
# hint: look at the slicing

#now lets define a function that uses a lambda expression!


def takes_lambda(my_lambda, a, b):
    return my_lambda(a) > my_lambda(b)


print(takes_lambda(lambda x: x**2, 8,-8))

declared_lambda = lambda x : abs(x)
print(declared_lambda(-9))

# we can also nest functions within each other!
def outer(a):
    def inner(b):
        return b**2
    return inner(a)

print("nested function outer ", outer(9))


# the following example is from https://www.programiz.com/python-programming/closure#:~:text=A%20function%20defined%20inside%20another,in%20order%20to%20modify%20them.
def make_multiplier_of(n):
    def multiplier(x):
        return x * n
    return multiplier

# Multiplier of 3
times3 = make_multiplier_of(3)

# Multiplier of 5
times5 = make_multiplier_of(5)

print(times3(9))


print(times5(3))


print(times5(times3(2)))