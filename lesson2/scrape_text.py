# So why use strings? Well, text is very useful as inputs and outputs of code

#!/usr/bin/python3

def read_a_file():
    lines_of_alice = []
    with open("AliceInWonderland.txt", "r") as f:
        line = f.readline()
        while line:
            line = f.readline()
            lines_of_alice.append(line)

    #     
    #     for line in contents:
    #         lines_of_alice.append(line)
    f.closed  
    return lines_of_alice  
    # print(lines_of_alice)

def modify_data(lines):
    new_output = []
    for line in lines:
        #print("line is ", line)
        for idx, char in enumerate(line):
            #print("idx and char are ", idx, char)
            if char == 'a':
               # print("char == a", char == 'a')
                new_output.append('Z')
            else:
                new_output.append(char)
    return "".join(new_output)

def write_a_file(data):
    with open("MyOutput.txt","w") as f:
            f.writelines(data)
    f.closed

# print(read_a_file())
data = modify_data(read_a_file())
write_a_file(data)