# unlike binary_example, here my_binary_number is an actual binary datatype (dont worry about this term yet) 
# what this means is that we can perform bitiwse operations directly on the number
my_binary_number = 0b0001 # how many bits are these? What decimal number does this represent?

print("my binary number is ", my_binary_number, bin(my_binary_number))

my_binary_number = my_binary_number << 2 #what value should my_binary_number hold now?

print("my binary number is ", my_binary_number, bin(my_binary_number))

my_byte = 0b11111111 # this is a byte, the standard unit of binary represntation. A byte can hold a value up to 255 decimal
print("my_byte is", my_byte, bin(my_byte))

my_hex_number = 0xFF #this is a hexadecimal notation, frequently used for larger numbers. It is base 16 instead of base 2, so it is more compact.

print("my hex number is ", my_hex_number, hex(my_hex_number))

print("byte and hex equlity ", my_byte == my_hex_number) # a byte is 8 bits, and the equivalent hex format is two hex characters

my_hex_number2 = 0xFEDCBA987654321 # these are all the possible hex values, F = 15, E = 14, D = 13, C =12, B = 11, A = 10, the rest are exaclty their numerical value
print(my_hex_number2)