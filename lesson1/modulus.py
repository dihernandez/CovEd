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
def base_5(n):
    base = 5 # here we choose base 5
    places= []
    remainder = n%base
    # [1,1,1] == [5^2 + 5^1 + 5^0] = 30
    # [5,5] = 30
    # remainder = n%5 
    # total = 30 + remainder
    for i in range(n):
        if i%base == 0 and i > 0:
            if(len(places) == 0):
                places.append(1)
        else:
            if(len(places) == 0):
                pass
            else:
                #print("places -1",places[len(places)-1])
                rem = places[-1]%base
                places[-1] += 1 
                #print(rem)
                if rem == 0:
                    print("adding new digit")
                    places.append(1)
                else:
                    print("about to inrement places")
                    places[-1] += 1
    return places, remainder


print(base_5(32))