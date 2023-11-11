#include <iostream>
using namespace std;

int countDigits(int number) {
  int digit, answer=0;
  while (number > 0)
  {
    digit = number % 10;
    answer += digit;
    number /= 10; 
  }
  return answer;
}

int main() {
  int initialNum, firstPart, secondPart, sumFirst, sumSecond;
  cin >> initialNum;
  firstPart = initialNum / 1000;
  secondPart = initialNum % 1000;
  sumFirst = countDigits(firstPart);
  sumSecond = countDigits(secondPart);
  if (sumFirst == sumSecond) cout << "YES";
  else cout << "NO";
  return 0;
}