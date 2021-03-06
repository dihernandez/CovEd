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
    print(key, mydict1[key])

for v in mydict1.values():
    print(v)

print("-----------sorted -----------")
print(mydict1.keys()) # there is no access method like slicing in lists. Why? dictionaries do not preserve order
print(mydict1.values())
print(sorted(mydict1)) # so what does this even mean?

print("----------nesting----------------------") 
# keys must be mutable, values can me immutable
my_nested_dict = {"a":{1:['a']}}
print(my_nested_dict["a"][1])
print(my_nested_dict)
# why wont this work:
#my_nested_dict2 = {[9]:{1:['a']} }
print("-------------keys----------------------")
mydict2 = {"a":0,"a":1,"a":3} # what do you expect to happen here?
print(mydict2)
