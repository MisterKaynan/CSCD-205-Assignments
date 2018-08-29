#include <iostream>
using namespace std;

int main()
{
  int m, l;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> m;

  for(l = 2; l <= m / 2; ++l)                //if .. else & for loop. The loop states that for every number input, there should be an increment of +1
                                             //+1 and then with the the modulus of the number input by user, if the modulus is zero(complete division)
                                            //then it is a composite number. If otherwise, the number is a prime number.
  {
      if(m % l == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is a composite number";

  return 0;
}
