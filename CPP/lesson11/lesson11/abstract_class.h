
namespace absclass {
// Abstract classes are also known as interfaces
class AbstractTest {
    public:
        // pure virtual function. Must be implemented by subclass in order for an instantiation to compile
        virtual int modifyA() = 0;
        
        int getA(){
            return value_a;
        };
        void setA(int new_value){
            value_a = new_value;
        }
    private:
        int value_a; 
};

class DerivedClassDouble : public AbstractTest{
    public:
        int modifyA();
};

class DerivedClassTriple : public AbstractTest{
    public:
        int modifyA();

};

} // namespace absclass

