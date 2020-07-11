# The goal of this module is to use the math API from the standard library
# I won't go too deep here because your homework will be to expand on this
import math

def using_math():
    myfloat1 = 9.8
    print("floor funcion ", math.floor(myfloat1))
    print("ceiling function", math.ceil(myfloat1))

    myfloat2 = 9.7999999999999
    print("is close is ", math.isclose(myfloat1, myfloat2))

using_math()

# at this point you should ask me to solve a reasonably simple math question programmatically and I will attempt a solution