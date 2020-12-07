#include <iostream>
#include <string>

using namespace std;

struct NameOfStruct1 {
    int field1;
    string field2;
};

// struct nameOfStruct1 {
//     int field1 = 1; cannot initialize here
//     string field2 = "d";
// };

struct NameOfStruct2 {
    int field1;
    string field2;
} nos_2_instance1, nos_2_instance2; // I can instantiate here

struct Degrees {
    float longitude, latitude;
};

struct Coordinates
{
    Degrees x, y, z;
} coords1;



int main() {
    NameOfStruct1 nos_1_instance; // or here
    nos_1_instance.field1 = 8;
    nos_1_instance.field2 = "deadbeaf";
    nos_2_instance1.field1 = 9;
    nos_2_instance1.field2 = "zzzzz";
    nos_2_instance1.field1 = 1;
    nos_2_instance1.field2 = "foobar";

    coords1.x.latitude = 108.90;
    coords1.x.longitude = 198.90;
    coords1.y.latitude = 60.90;
    coords1.y.longitude = 198.90;
    coords1.z.latitude = 189.90;
    coords1.z.longitude = 112.90;

    struct Degrees degrees_arr[4];
    for(int i = 0; i < 4; i++){
        degrees_arr[i].latitude = .5*i;
        degrees_arr[i].longitude = i%2;
    }

    for(auto degree: degrees_arr) {
        cout << " longitide "<< degree.longitude << " latitude" << degree.latitude << endl;
    }


    return 0;
}