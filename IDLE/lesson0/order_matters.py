#this is meant to illustrate that order matters (more on why later)


# do you think these will run? why or why not?
def first_function():
    print("I'm number one!")
    
first_function()

def second_function():
    first_function()
    print("I'm number 2 and I just called first_function")
    
second_function()


def third_function():
    print("I'm number 3 and I want to call number 4")
    fourth_function()

third_function()
    
def fourth_function():
    print("I'm number 4")

fourth_function()




