#include <random> 
#include <chrono> 
#include <iostream>
using namespace std;
int main()
{
  mt19937 gen;
  gen.seed(213);
     
  vector<int> my_vector(10,0);
  uniform_int_distribution<int> dis(0, my_vector.size()-1);
  for (int n=0; n< 10; ++n){
    my_vector[dis(gen)]++;
  }
  for(int e:my_vector){
    cout << e << endl;}
    
    
}
