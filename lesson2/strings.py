mystr0 = "aabcdef9873!"
mystr1 = "s p a c e"
mystr2 = "this,is,using,commas"

# print(mystr0.split("")) doesn't work, instead have to do
print([l for l in mystr0])

# these do work
print(mystr1.split(' '))
print(mystr2.split(','))

# stings are immutable, that means they cannot be modified. The following creates a copy of mystr0
#my_mutated_string[0] = 'a' # this shouldn't work

my_mutated_string = mystr0 + "c"
print(my_mutated_string)



# but python allows you to reuse the variable name, so the following works too!
mystr0 += 'g'
print(mystr0)

# notice a lack of operations such as append and pop https://docs.python.org/3/library/string.html

import string #to use constants, such as:

print(string.ascii_letters)

# write a program that strips all non ascii lowercase letters from any given string