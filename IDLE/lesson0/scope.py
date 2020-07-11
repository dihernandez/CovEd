# this is intended to illustrate the concept of scope

var1 = 8

def scope_function():
    var1 = 9
    return var1

for i in range(10):
    print(i)


print("calling variable ", var1)

print("calling function", scope_function())
