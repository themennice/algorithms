/*
  This program finds a three-digit number n such that
  n = 100a + 10b + c = a! + b! + c!
  A beautiful problem.
*/

#include <iostream>

using namespace std;

int  factorial(int num)
{
  if(num == 0)
    return 1;
  return num * factorial(num - 1);
}

int main() {
  bool exists= false;
  int a, b, c;
  int sum, fact;
  for(a = 0; a < 10; a++)
  {
    for(b = 0; b < 10; b++)
    {
      for(c = 0; c < 10; c++)
      {
        sum = 100*a + 10*b + c;
        fact = factorial(a) + factorial(b) + factorial(c);
        if(sum == fact)
        {
          cout << "The number is " << a << b << c << endl;
          exists = true;
          //return 0;
        }
      }
    }
  }
  cout << boolalpha << exists << endl;
  return 0;
}
