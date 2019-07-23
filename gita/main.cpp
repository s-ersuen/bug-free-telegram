#include <fstream>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
int a=100;
ofstream out("output.txt");
int tges = 20;
array<array<array<double,100>,100>,100> gitter;
array<array<array<double,100>,100>,100> gitter2;
array<array<array<double,100>,100>,100> gitter3;

	for (int i=0 ; i<a;++i){
 		for (int j=0; j<a; ++j){
			for (int k=0; k<a; ++k){
if (i==0){gitter[i][j][k]=1000.;} else {gitter[i][j][k]=0; }

}
	}
 		}
for(int t=0; t<tges; t++) {
 for(int i=1 ; i<a -1 ; i++){
  for(int j=1; j<a -1; ++j){
   for(int k=1; k<a -1; ++k){
  gitter[i][j][k]= (1./6.) *( gitter[i+1][j][k]+ gitter[i-1][j][k]+ gitter[i][j+1][k]+ gitter[i][j-1][k]+ gitter[i][j][k+1]+ gitter[i][j][k-1]);
 gitter2[i][j][k]=gitter[i][j][k];
  }
  }         
 }
}
for ( int i =0 ; i<a ; i++){
for (int k=0; k<a ; k++){
out << i << " " << k << " " << gitter2[i][50][k]<<endl;
}
}
//	for (int i=0 ; i<a;++i){
 //		for (int j=0; j<a; ++j){
//			for (int k=0; k<a; ++k){
//gitter[i][j][k]=0.;
//gitter3[i][j][k]=0.;
//gitter[20][20][20]=100.;
//gitter3[20][20][20]=100.;
//}}}
//for (int t=0; t<2000; ++t){ 
//for (int i=1; i<a-1 ; i++){ 
//for (int j=1; j<a-1; j++){
//for (int k=1;k<a-1;k++){
//gitter[i][j][k]= (1./6.) *( gitter[i+1][j][k]+ gitter[i-1][j][k]+ gitter[i][j+1][k]+ gitter[i][j-1][k]+ gitter[i][j][k+1]+ gitter[i][j][k-1]-gitter3[i][j][k]);
//gitter2[i][j][k]=gitter[i][j][k];
//}}}}


for (int i=0; i<a; i++){
for (int k=0; k<a;k++){
out << i << " " << k << " " << gitter2[i][50][k] << endl;
}
}
}

