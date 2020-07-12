# I'm going to go through this, then you should be able to write it from memory using the skills you already have

def add_numbers(a,b):
    return a + b

def subtract_numbers(a,b):
    return a - b

def multiply_numbers(a,b):
    return a*b

def divide_numbers(a,b):
    if b == 0:
        return "invalid operation, divide by zero"
    else:
        return a/b

# this is multiplication "rolled out"
def multiply_by_addition(a,b): #this is actually how it works in computer hardware
    total = 0
    for _ in range(b): #this _ just means we dont care about the value
        total += a
    return total

#this is just an example of using more variables
def check_deal_gas_law(P,V,n,R,T):
    return P*V == n*R*T 

print(multiply_numbers(9,7) == multiply_by_addition(9,7))