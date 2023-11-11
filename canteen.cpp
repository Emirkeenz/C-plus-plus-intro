#include <iostream>
using namespace std;

int main() {
  int som, tyiyn, amount;
  cin >> som >> tyiyn >> amount;
  som *= amount;
  tyiyn *= amount;
  while (tyiyn > 100)
  {
    som += 1;
    tyiyn -= 100;
  }
  cout << som << " som and " << tyiyn << " tyiyn";
  return 0;
}