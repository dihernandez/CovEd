class Datastructures:
    def __init__(self):
        self.mylist = []
        self.mydict = {}
        self.myset = ()
        self.mystring = "adfasdfadskj9123io23983@#!~!@~jf;hidfa"

    def count_characters_in_string_base(self):
        return len(self.mystring)
    
    def count_characters_in_string_list(self):
        split_list = []
        for char in self.mystring:
            split_list.append(char)
        print(split_list)
        return len(split_list)
    
    def count_characters_in_string_dict(self):
        char_dict = {}
        for value in self.mystring:
            if value in char_dict.keys():
                char_dict[value] += 1
            else:
                char_dict[value] = 1
        count = 0
        for val in char_dict.values():
            count += val
        return count

    def count_characters_in_string_set(self):
        chars = set(self.mystring)
        print("individual characters used are ", chars)
        count = 0
        for char in chars:
            count += self.mystring.count(char)
        return count


    def get_frequency_of_chars(self):
        chardict = {}
        for c in self.mystring:
            if c in chardict.keys():
                chardict += 1
            else:
                chardict = 1

    def extract_all_chars(self):
        return set(self.mystring)


ds = Datastructures()
print("basic ", ds.count_characters_in_string_base())
print("using lists", ds.count_characters_in_string_list())
print("using dicts", ds.count_characters_in_string_dict())
print("using set", ds.count_characters_in_string_set())

#print(ds.get_frequency_of_chars())
print(ds.extract_all_chars())