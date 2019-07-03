#include <fstream>
#include <iostream>
#include <vector>
#imclude <array>
int main(){
array<array<array<double,100>,100>,100> gitter;
			for (int i=0 ; i<gitter.size();++i){
 		for (int j=0; j<gitter.size(); ++j){
	for (int k=0; k<gitter.size(); ++k){
if (i==0){gitter[i][j][k]=1000;} else {gitter[i][j][k]=0;}
			}  
		}
 	}
}
