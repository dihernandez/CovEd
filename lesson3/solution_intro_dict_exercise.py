def count_charactes(mychars):
	mydict = {}
	for i in mychars:
		# Why do I need this if else statement?
		if(i in mydict.keys()):
			mydict[i] += 1
		else:
			mydict[i] = 1

	return mydict

print(count_charactes([c for c in "adfadiuhakdf"]))


# (a) solution
def find_most_used_character(input_string):
    characters = {}
    for c in input_string:
        if c not in characters.keys():
           characters[c] = 1
        else:
            characters[c] += 1
    max_count = 0
    for key in characters.keys():
        if characters[key] > max_count:
            max_count = characters[key]
    return max_count

# why would I want to use my algorithmvs the following : max(sorted(characters.values()))
print(find_most_used_character("asdfada"))