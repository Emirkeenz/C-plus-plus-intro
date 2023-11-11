#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int nextPrime(int b) {
  b++;
  while (!isPrime(b)) {
    b++;
  }
  return b;
}

int main() {
  int initialNum;
  cin >> initialNum;
  cout << nextPrime(initialNum);
}