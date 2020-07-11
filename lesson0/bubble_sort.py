#an example of an algorithm

'''this is a multi
line print statement

This algorithm takes a list of integers and returns a sorted list of integers

Python has a sorted() function, but here I will do it manually'''

myints= [1,8,3,4,0,9]

def sort_ints(ints):
    llen = len(ints)

    for i in range(llen):
        for j in range(0,llen - i - 1):
            if ints[j] > ints[j + 1]:
                intermediate = ints[j]
                ints[j] = ints[j + 1]
                ints[j+1] = intermediate
    return ints
                #this is equivalent: ints[j], ints[j+1] = ints[j+1], ints[j] 
myints = [1,9,6,2,1]
print(sort_ints(myints))

print(sorted(myints))

