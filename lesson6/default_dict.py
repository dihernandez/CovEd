from collections import defaultdict

# previously to add to a dictionary you had to do this:
mydict = {}
mykeys = ["k","a","d","j","d", "a", "d","c"]
for key in mykeys:
    if key in mydict.keys():
        mydict[key] += 1
    else:
        mydict[key] = 1

# with default dict we can just do
my_defaultdict = defaultdict(int)
for key in mykeys:
    my_defaultdict[key] += 1
# what's the difference?
print(mydict, my_defaultdict)

my_defaultdict_lambda = defaultdict(lambda : "Not Present")

print(my_defaultdict_lambda['Some Value Not Present'])
my_defaultdict_lambda[1] =  "is present"
print(my_defaultdict_lambda[1])