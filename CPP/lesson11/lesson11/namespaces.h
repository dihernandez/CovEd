#ifndef NAMESPACES
#define NAMESPACES

#include <string>
#include <vector>

namespace outer_space {
    namespace inner_space {

        struct TestStruct1
        {   
            std::string f1;
            std::vector<std::string> f2;
        };
        
        class Test{
            private:
                bool isprivate;
                std::string color;
            public:
                Test(std::string color):color(color) {};
                std::string makePublic();
        };

    }

}

namespace other {
        struct TestStruct1
        {   
            std::string f1;
            std::vector<std::string> f2;
        };
        
        class Test{
            private:
                bool isprivate;
                std::string color;
            public:
                Test(std::string color):color(color) {};
                std::string makePublic();
        };

}

#endif // NAMESPACES