#include <fstream>
#include <iostream>
using namespace std;
int foo(int arg1, int arg2){
  return arg1*arg2; 
}
int main(){ 
  int var1;
  int var2;
  ifstream in("input.txt");
  for(int i=0; i<3 ; i++){
   in>>var1;
   in>>var2;
   int a = foo(var1,var2);
   cout << a << endl;
  }
  return 0; 
}
