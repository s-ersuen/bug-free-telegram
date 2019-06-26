#include <random> 
#include <chrono> 
#include <iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
  ofstream out("output1.txt");
  ofstream out2("output.txt");
  mt19937 gen;
  gen.seed(116);
   int p=1000000;
  double  x=0; 
   int dt=11;
 double l=0; 
 vector<double> ort (p,0);
 vector<double> mort (dt,0);
 vector<double> vort (dt,0);
 vector<double> zort (2*dt+1,0);
 
 
  uniform_int_distribution<int> dis(0,1);
  for (int m=1.; m<dt ; ++m){
    
  for (int n=0; n<p ; ++n){
    int y=dis((gen)); 
    if (y==1) {ort[n]++; }
    else {ort[n]--;}

  }
  for (int k=0; k<p ; ++k){
  mort[m]=ort[k]+mort[m]; 
  }

mort[m]=mort[m]/p;
out << mort[m] << endl;
cout << mort[m] << endl;
for (int k=0 ; k<p ; ++k ){
vort[m]=vort[m]+(ort[k]-mort[m])*(ort[k]-mort[m]);
}
vort[m]=vort[m]/p;
    
  
  }
for (int k=0; k<2*dt+1 ; ++k){
  for (int n=0 ; n<p ; ++n){
if (ort[n]==k-dt) {zort[k]++;}
}



  }  
}    

