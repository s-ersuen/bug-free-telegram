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
   int p=10000;
  double  x=0; 
   int dt=10; 
  uniform_int_distribution<int> dis(0,1);
  for (int m=0; m<dt ; ++m){
    
  for (int n=0; n<p ; ++n){
    int y=dis((gen)); 
    if (y==1) {x=x+1 ; }
    else {x=x-1 ;}

  }
  x=x*x/p;
    out<<x<<endl;
    cout<<x<<endl;
  }

  }  
    

