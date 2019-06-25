#include <random> 
#include <chrono> 
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream out("output.txt");
  ofstream out2("output2.txt");
  mt19937 gen;
  gen.seed(115);
   int p=1000000;
  double  x=0; 
   int dt=11;
  double z=0;
 double l=0; 
  uniform_int_distribution<int> dis(0,1);
  for (int m=1.; m<dt ; ++m){
    
  for (int n=0; n<p ; ++n){
    int y=dis((gen)); 
    if (y==1) {x=x+1 ; }
    else {x=x-1 ;}

  }
  z=z+x*x/p;
  l=z+x/p;
    out<<z<<endl;
    cout<<z<<endl;
    out2<<l<<endl;
    cout << l<<endl; 
  }

  }  
    

