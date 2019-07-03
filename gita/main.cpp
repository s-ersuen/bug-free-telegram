#include <fstream>
#include <iostream>
#include <vector>
#imclude <array>
int main(){
array<array<array<double,100>,100>,100> gitter;
int tges=10;
vector <double> phi0(tges+1,0);
vectro <double> phi1(tges+1,0);
for(int t=0, t<tges , t++){
	for (int i=0 ; i<gitter.size();++i){
 		for (int j=0; j<gitter.size(); ++j){
			for (int k=0; k<gitter.size(); ++k){
if (i==0){gitter[i][j][k]=1000;} else {gitter[i][j][k]=0; }

}
	}
 		}
			}
}
