# this is a basic dictionary
basicdict = {1:"Hello"}
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