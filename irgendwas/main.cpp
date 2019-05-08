#include <iostream>
int foo(int arg1, int arg2, int arg3 ) {
  return arg1*arg2*arg3;
}
int main(int arga, int argb,int argc){
int a = foo(1,2,3);  
  std::cout << a << std::endl; 
  return 0;
}
