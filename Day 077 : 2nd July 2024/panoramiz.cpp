// https://codeforces.com/problemset/problem/80/A

#include <iostream>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  

  bool is_prime = false;
  
  const int numPrime = 15;
  const int primes[numPrime] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

  for(int i = 0; i < numPrime-1;i++) {
    if(n==primes[i] && m == primes[i+1]){
      is_prime = true;
      break;
    }
  }
  is_prime ? cout << "YES\n" :cout <<  "NO\n";
  return 0;
}
