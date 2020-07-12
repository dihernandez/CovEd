import math
#exercie: write foobar

#in python, division automatically rounds down

print(9/2)

# what if we want a decimal value?

print(9./2)

#comparison

print(9./2 == 9/2)

# recall how in long division we carry the remainder
# in this example, 9/2 = 4 with remainder 1
# this remainder can be very useful
# this modulus operator, %, allows us to access the remainder

def get_all_evens (n):
    evens = []
    for i in range(n):
        if i % 2 == 0:
            evens.append(i)
    return evens

print(get_all_evens(19))

# using modulus, we can essentially create a numerical reprentation of base n (where n is any integer)
# [1,1,0] == [5^2 + 5^1 + 5^0] = 30
# remainder = n%5 
# total = 30 + remainder
''' I borrowed the following algorithm from https://bradfieldcs.com/algos/stacks/converting-number-bases/'''
def base_b(base, number):
    places = []
    remainders = []
    while number > 0:
        rem = number % base
        remainders.append(rem)
        number = number // base
    while len(remainders) > 0:
        places.append(remainders.pop())

    return places

print(base_b(5,32))

#exercise- foobar