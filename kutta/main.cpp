
#include <chrono>
#include <iostream>
#include<fstream>
#include<vector>
 using namespace std;
   int main()
   {
   int p=100;
  vector<double> k1(p+1);

  for (int n=0; i<p ; ++i){
   k1[i]= (gamma * m * z[i]+ m * g * sin(phi[i]))/(m*l);
   k2[i]=(gamma * m * (z[i]+ h/2 *k1[i] )+ m * g * sin((phi[i])+h/2))/(m*l);
   k3[i]= (gamma * m * (z[i]- h *k1[i]+2*h*k2[i] )+ m * g * sin((phi[i])+h))/(m*l);
   y[i+1]= y[i]+ h*(1/6 * k1[i] + 4/6 k2[i] + 1/6 * k3[i]); 
    

   }
  }

