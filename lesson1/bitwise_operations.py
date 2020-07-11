# This module is to show the different arithmetic operations that can be done in a bitwise manner
# The goal is to get familiar with boolean arithmetic and logic

# mybyte1 = 0b11001001
# mybyte2 = 0b00110110
# print("mybyte1 is ", bin(mybyte1), "mybyte2 is", bin(mybyte2))

# # what is the difference between the following:
# myint1 = int(mybyte1)
# myint2 = int(mybyte2)
# if myint1 == 0 and myint2 == 9:
#     print("shouldn't print")

''' this illustrates the AND truth table'''
bool1 = 0
bool2 = 0

print("0 0 gives ", bool1 and bool2)

bool1 = 0
bool2 = 1

print("0 1 gives ", bool1 and bool2)
bool1 = 1
bool2 = 0

print("1 0 gives ",bool1 and bool2)

bool1 = 1
bool2 = 1

print("1 1 gives ",bool1 and bool2)

''' end truth table '''
# now we will see the difference between the conidtional and and a bitwise and

mybyte1 = 0b11001001
mybyte2 = 0b00110110
print("mybyte1 is ", bin(mybyte1), "mybyte2 is", bin(mybyte2))

print("conditional and ", mybyte1 and mybyte2, bin(mybyte1 and mybyte2))
print("bitwise and ", mybyte1 & mybyte2, bin(mybyte1 & mybyte2)) # this is basically boolean subtraction
print("conditional or ", mybyte1 or mybyte2, bin(mybyte1 or mybyte2))
print("bitwise or ", mybyte1 | mybyte2, bin(mybyte1 | mybyte2)) # this is basically boolean addition


print("---------------------------------------------------------------------")
mybyte3 = 0b11011111
mybyte4 = 0b00110110
print("mybyte3 is ", bin(mybyte3), "mybyte4 is", bin(mybyte4))

print("conditional and ", mybyte3 and mybyte4, bin(mybyte3 and mybyte4))
print("bitwise and ", mybyte3 & mybyte4, bin(mybyte3 & mybyte4)) # this is basically boolean subtraction
print("conditional or ", mybyte3 or mybyte4, bin(mybyte3 or mybyte4))
print("bitwise or ", mybyte3 | mybyte4, bin(mybyte3 | mybyte4)) # this is basically boolean addition
