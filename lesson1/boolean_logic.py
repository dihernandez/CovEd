# this is the intro to our section on boolean logic and binary representations

print(True)
print(1)
print(1 == True)

print("---------------------------")

print(0)
print(False)
print(0 == False)

print("---------------------------")

print(True and False)
print(True or False)

print(False and False)
print(False or False)

print(True and True)
print(True or True)
print("---------------------------")
print("is within")
def is_within(n, a, b):
    if n < b and n > a:
        return True
print(is_within(9,0,10))

# A short circuit occurs when in an or statement, the first condition is true the followng condition(s) don't need to be evauluated
def short_circuit():
    int1 = 9
    int2 = 65
    if(int1 > 0 or int2 > 0): # does int2 >0 have to be evaluated?
        print("short circuit when int2 condition is true")
    if(int1 > 0 or int2 < 0): # does int2 >0 have to be evaluated?
        print("short circuit when int2 condition is false")
    if(True or int2 < 0): # does int2 >0 have to be evaluated?
        print("short circuit guaranteed")
short_circuit()
#question - can we have  a short circuit with an and comparator? Why or why not?

# Demorgan's law states fundamentals of boolean algebra
def demorgan():
    A = True
    B = False
    print("not A and B is ", not (A and B))
    print("not A or B is ", not (A or B))
    print("not A or not B is ", not A or not B)
    print("not A and not B is ", not A and not B)

    print("demorgan1: ", not (A and B) == (not A or not B))
    print("demorgan2: ", not (A or B) == (not A and not B))
demorgan()