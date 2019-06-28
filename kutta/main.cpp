#include <chrono>
#include <iostream>
#include<fstream>
#include<vector>
#include<cmath>
using namespace std;
ofstream out("output.txt");
   int main()
   {
   int p=10000;
  double  h=0.01;
  double  m=1;
  double  g=9.81;
  double gamma= 0.1;
  double l=1;
  vector<double> k1(p+1,0);
  vector<double> k2(p+1,0);
  vector<double> k3(p+1,0);
  vector<double> l1(p+1,0);
  vector<double> l2(p+1,0);
  vector<double> l3(p+1,0);
  vector<double> z(p+1);
  vector<double> phi(p+1,0);
  z[0]=0.0;
  phi[0]=1.0;
  int j;
  for (int i=0; i<p ; ++i){ 
    j=i+1;
   k1[i]= (-gamma * m * z[i]+ m * g * sin ( phi[i]))/(m*l);
   k2[i]=(-gamma * m * (z[i]+ h/2 *k1[i] )+ m * g * sin ((phi[i])+h/2))/(m*l);
   k3[i]= (-gamma * m * (z[i]+ h *k1[i] + 2*h*k2[i] )+ m * g * sin ((phi[i])+h))/(m*l);
 
   
z[j]= z[i]+ h*(1./6. * k1[i] + 4./6.* k2[i] + 1./6. * k3[i]); 

   l1[i]=z[i]*l; 
   l2[i]=z[i]+h/2*l;
   l3[i]=z[i]+h*l;

 phi[j] = phi[i] - h*(1./6. * l1[i] + 4./6. * l2[i]+ 1./6. * l3[i]);

  
    
  }
  double x;
  double y;
    for (int r=0 ; r<p/100 ;r++ ){
  x= sin(phi[r*10]);
  y= cos(phi[r*10]);
      out << x <<" " << y << endl;
  }
  }

