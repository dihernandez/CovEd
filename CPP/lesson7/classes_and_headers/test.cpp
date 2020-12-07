 #include "test.h"

  int Test::get_x(){
      return x;
  }

  int Test::get_y(){
      return y;
  }
  
  void Test::add_to_x(int a){
      x += a;
  }
  
  void Test::add_to_y(int a){
      y += a;
  }