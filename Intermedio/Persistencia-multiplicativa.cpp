#include <iostream>
#include <vector>

using namespace std;

long long multVect(vector<int> nd){
  long long mult = 1;
  for (auto i = nd.begin(); i != nd.end(); ++i){
        mult *= *i;
  }
  return mult;
}

int persistence(long long n){
  int salida = 0;
  while(n > 9){
    vector<int> nd;
    while(n > 9){
      nd.push_back(n%10);
      n = int((n-(n%10))/10);
    }
    nd.push_back(n);
    n = multVect(nd);
    salida ++;
  }
  return salida;
}