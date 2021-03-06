# what is a list?
mylist0 = []
mylist1 = []*9
mylist2 = [0]*9
print("These are example uninitialized and initialied lists")
print(mylist0, mylist1, mylist2)

print("---------------example two dimensional list------------------")
two_dimensional_list1 = [[0]*3]*3
two_dimensional_list1[2][0] = "hello"
print(two_dimensional_list1)
# basic_two_d_list = [["a", 7],["i",10]]
# print("basic_two_d_list is ", basic_two_d_list)
print("--------------Initialized 2d list-------------------")
two_dimensional_list2 = []
for i in range(10):
    intermediate_list = []
    for j in range(5):
        intermediate_list.append(j)
    two_dimensional_list2.append(intermediate_list)
print("two dimensional list initialized is ", two_dimensional_list2)

print("-----------------Syntactic Sugar----------------")
syntactic_sugar = [i for i in range(100) if i%3 == 0]

mylist4 = []
for i in range(100):
    if i % 3 == 0:
        mylist4.append(i)

print(mylist4, syntactic_sugar)


print(syntactic_sugar)