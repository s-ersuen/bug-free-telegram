#include <chrono> 
#include <iostream> 
#include<fstream> 
#include<vector> 
#include<cmath>
using namespace std; 
ofstream out("werte_ohne_reibung_36.txt");
   int main()
   {
   int p=100000;
  double h=3./100000;
  double m=1;
  double g=9.81;
  double gamma=6 * M_PI * 17 /100000000 ;
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
  phi[0]=M_PI/2;
  int j;
  for (int i=0; i<p ; ++i){
    j=i+1;
   k1[i]= (-gamma *l* z[i]- m * g * sin ( phi[i]))/(m*l);
   k2[i]=(-gamma *l* (z[i]+ h/2. *k1[i] )- m * g * sin ((phi[i])+h/2.))/(m*l);
   k3[i]= (-gamma *l* (z[i]- h *k1[i] + 2.*h*k2[i] )- m * g * sin ((phi[i])+h))/(m*l); 

z[j]= z[i]+ h*(1./6. * k1[i] + 4./6.* k2[i] + 1./6. * k3[i]);
   l1[i]=z[i];
   l1[i]=z[i];
   l2[i]=(z[i]+h/2.);
   l3[i]=(z[i]+h);

 phi[j] = phi[i] + h*(1./6. * l1[i] + 4./6. * l2[i]+ 1./6. * l3[i]);
  }
  double x;
  vector<double> Ekin(p+1,0);
  vector<double> Epot(p+1,0);
  vector<double> Eges(p+1,0);
  vector<double> y(p+1,0);
    for (int r=0 ; r<p ;r++ ) {
 x= sin(phi[r])*l;
 y[r]= -cos(phi[r])*l;
 Ekin[r]= (z[r]*l)*m/2.*(z[r]*l);
 Epot[r]= m*g*y[r];
 Eges[r] = Ekin[r]+Epot[r];
 out << phi[r] << " " << Epot[r] <<" " << Ekin[r] <<" " << Eges[r]<< endl;
  // out<<phi[r] << " " << Eges[r] << endl; // out << phi[r] << " "<< z[r] << endl; // out << x <<" " << y << endl;
  }
  }
