# lists are very versatile

# a list can contain any combination of valid data types
print("---------------------------------")
vallist = ['a',2 , 2.40,"d", []]
for val in vallist:
    print(val)

# we can iterate over the list itself but also over the indices
for idx, val in enumerate(vallist):
    print(idx, val)

# we can do ninja style slicing, check out:
my_sorted_list = sorted([9,23,4,1,0])

print(my_sorted_list)
print(my_sorted_list[::-1])

print(my_sorted_list[1:len(my_sorted_list)])
print(my_sorted_list[1:-1])
print(my_sorted_list[1:])


#lots of helpful methods available https://docs.python.org/3/tutorial/datastructures.html
list_appendable =[]
list_extendable =[]

for i in [[1,3],[2,3],[0]]:
    list_appendable.append(i)
    list_extendable.extend(i)

print("appendable, ", list_appendable)
print("extendable, ", list_extendable)

# let's solve the following problem - we want a string of characters without the character ex_char given any string how to accomplish this?
def exclude_char(ex_char, input_string):
    mylist = [c for c in input_string] # get characters in list format
    n_occurences = mylist.count(ex_char) # get number of occurences in list
    while n_occurences > 0: # until all instances of ex_char has been removed, remove from list
        n_occurences -= 1
        mylist.remove(ex_char)
    return "".join(mylist)
print("exclude char is ", exclude_char("d", "adfadda"))

# we can make useful datastructures out of them
queue = [1,4,2,3,5]
stack = [1,4,2,3,5]

for i in range(len(queue)):
    print("queue pops", queue.pop(0), "stack_pops", stack.pop())

