#include <random> 
#include <chrono> 
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream out("output.txt");
  mt19937 gen;
  gen.seed(5);
   int dt=100;
   
   int p=100; 
  uniform_int_distribution<int> dis(0,1);
  for (int m=0; m<p ; ++m){
    int x=0;
  for (int n=0; n<dt ; ++n){
    int y=dis((gen)); 
    if (y==1) {x=x+1 ; }
    else {x=x-1 ;}
  }
  x=x/100;
out << x << endl;
  }
  }  
    

