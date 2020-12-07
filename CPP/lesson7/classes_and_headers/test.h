#ifndef TEST_H_
#define TEST_H_
class Test{
private:
  int x,y;
public:
  Test(int x,int y):x(x),y(y)
  {
  }
  int get_x();
  int get_y();
  void add_to_x(int a);
  void add_to_y(int a);
};

#endif // TEST_H_