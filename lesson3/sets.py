# sets are exactlt what they sound like mathematically
# to initialize, there are two options
empty_set = set() #for an empty set
empty_set.add("adfad")
initialized_set = {"a","b","c"}
init_with_set = set("adfadfsa")
this_is_a_dictionary = {}
# so don't initialize an empty set with brackets
print(empty_set, initialized_set, init_with_set)

# what did you notice about init_with_set?
#set1 = set("adfadfasdfads")
#set2 = set("adfnvve")
set1 = set("abcdefg")
set2 = set("efghijk")
print(set1, set2)

# we can do more!
print("------------------set theory--------------")
print(set1 - set2) # complement
print(set2 - set1) # complement
print(set1 | set2) # union
print(set1 & set2) # intersection