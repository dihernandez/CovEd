# var1 and var2 are not equivalent, var2 is a string representation of var1 in binary form
var1 = 8
var2 = bin(var1)

print("var1 is ", var1, "var2 is ", var2, "are equal? ", var1 == var2)

# this is called a bit shift operation, mul1 should equual mul2
mul1 = var1*2
mul2 = var1 << 1

print("mul1 is ", mul1, "mul2 is ", mul2)
print("mul1 == mul2 ", mul1 == mul2)

# this is just an example of how the bitshift operator can be used for larger numbers
mul3 = var1 << 10
print("binary var2 is ", var2, "binary mul2 is ", bin(mul2), "binary mul3 ", bin(mul3))
