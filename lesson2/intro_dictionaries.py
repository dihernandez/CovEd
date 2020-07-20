# this is a basic dictionary
basicdict = {1:"Hello", "a":9}
print(basicdict)
# here is a more complex dictionary
myvals = ["one", "one", "two", "three","three","three", "five"]
mydict0= {}

for v in myvals:
    if v not in mydict0.keys():
        mydict0[v] = 1
    else:
        mydict0[v] += 1
print("--------------counting occurences:")
print(mydict0)

#Things to note about dictionaries: they are very powerful, they are unsorted, they are mutable, you can mix and match data types just like in lists

mydict1 = {}

for v in myvals:
    if v not in mydict1.keys():
        mydict1[v] = [v]
    else:
        mydict1[v].append(v)
print("--------------Appending occurences:")
print(mydict1)


print("-----------------Iterations--------------")
# iterate like this:

for key, value in mydict1.items():
    print(key, value)
 # or
for key in mydict1.keys():
    print(key, mydict1[value])
# or
for value in mydict1.values():
    print(sorted(value)) # why doesn't this sort the keys?

print("-----------------Exercise--------------")
#exercise: use a dictionary to map the characters that appear in a string to the number of appearences. Find the most frequently used character.















# (a) solution
# def find_most_used_character(input_string):
#     characters = {}
#     for c in input_string:
#         if c not in characters.keys():
#            characters[c] = 1
#         else:
#             characters[c] += 1
#     max_count = 0
#     for key in characters.keys():
#         if characters[key] > max_count:
#             max_count = characters[key]
#     return max_count

# why can't I just use sorted(characters.values())?
