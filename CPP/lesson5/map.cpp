#include <iostream>
#include <map>

using namespace std;

void printCharIntMap(map<char,int> map_to_print){

    for(map<char, int>::iterator itr = map_to_print.begin(); itr != map_to_print.end(); itr++) {
        cout << itr->first << " ";
        cout << itr->second;
        cout << endl;
    }
}
// Key is accessed as map->first, vlaue as map->second
int main() {
    map<char,int> map1;
    char map_keys[] = {'a','b','c','d'};
    int map_values[] = {1,2,3,4};
    for(int i = 0; i < sizeof(map_keys)/sizeof(char); i++) {
        map1[map_keys[i]] = map_values[i];
    }
    cout << "printing map 1 " << endl;
    printCharIntMap(map1);

    map<char,int> map2(map1.begin(), map1.end());
    cout << "printing map 2 " << endl;  
    printCharIntMap(map2);
    cout << "map2 is of size " << map2.size() << " and is not empty " << !map2.empty() << endl;
    map<char, int>::iterator find1, find2;
    find1 = map2.find('b');
    find2 = map2.find('f');
    cout << "find 1 is " << find1->first << " , " << find1->second << " find 2 is not found, so we see nonsence for the key and an iterator to end for value" << find2->first << " , " << find2->second << endl;
    // note that count can only be a max of 1 since keys are unique, and 0 if the ket is not foudn
    cout << "does map2 contain key 'a' ? " << map2.count('a') << " does map2 contain key 'f'? " << map2.count('f') << endl;

    map2.insert(pair<char, int>('g', 100));
    map2.insert(pair<char, int>('z', 200));
    cout << "printing map 2 after inserts " << endl;  
    printCharIntMap(map2);



    map2.erase('a');
    cout << "printing map 2 after erase by key" << endl;  
    printCharIntMap(map2);

    map<char, int>::iterator it_map2 = map2.begin(); // note: I have to start my iterator to the beginning after removing the first element. Otherwise I'll get a segfault


    cout << "map2 is of size " << map2.size() << endl;

    map2.erase(it_map2);
    cout << "printing map 2 after erase by iterator single " << endl; 
    printCharIntMap(map2);

    it_map2 = map2.begin(); // note: I have to reset my iterator to the beginning because I removed the first element. Otherwise I'll get a segfault
    map<char, int>::iterator it_map3 = it_map2;
    it_map3++;
    it_map3++; //note I cannot just do it_map3+=2 with a map because it is not random access
    map2.erase(it_map2, it_map3);

    cout << "printing map 2 after erase by iterator range " << endl;  
    printCharIntMap(map2);

    cout << "finally, I can access an element like this " << map2['g'] << endl;
    return 0;
}