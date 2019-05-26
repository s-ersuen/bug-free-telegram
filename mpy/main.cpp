#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
double foo(double arg1){
  return (arg1*(9./5.)+32); 
}
int main(){ 
  double var1;
  double var3;
  ofstream out("output.txt");
  ifstream in("input.txt");
  for(double i=0; i<3 ; i++){
   in>>var1;
   double a = foo(var1);
   out << a << endl;
  }
  return 0; 
}
