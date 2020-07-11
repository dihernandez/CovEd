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


	
