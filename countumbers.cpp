#include <iostream>
using namespace std;

int main() {
  int amountOfNumbers, even = 0, odd = 0;
  cin >> amountOfNumbers;
  for (int i = 0; i < amountOfNumbers; i++)
  {
    int num;
    cin >> num;
    if (num % 2 == 0) even++;
    else odd++;
  }
  cout << "Odds: " << odd << "\n" << "Evens: " << even;
  return 0;
}