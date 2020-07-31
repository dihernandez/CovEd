# what if we want to name a function as a variable??

myfunc1 = lambda x : x**2

print(myfunc1(9))

# student_tuples = [
#     ('john', 'A', 15),
#     ('jane', 'B', 12),
#     ('dave', 'B', 10),
# ]
# sorted(student_tuples, key=lambda student: student[2])   # sort by age
# [('dave', 'B', 10), ('jane', 'B', 12), ('john', 'A', 15)]

mylist = [("a", 1) ,("b", 3),("f", 5),("p", 32),("a", 21),("d", 8)]
# what will this do?
print(sorted(mylist, key = lambda x: x[0]))
# what about this?
print(sorted(mylist, key=lambda x: x[1]))
# hint: look at the slicing