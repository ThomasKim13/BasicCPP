#include <iostream>
#include <cmath>
#include <iomanip>
#include <cfloat>
using namespace std;
int main(int argc, const char * argv[]) {
  int n;

  double fakePi;
  cout << "Please enter a non-negative integer upper limit of summation for the Leibnitz formula for computing pi:" << endl;
  cin >> n;
  for(int k = 0; k <= n; k++){
    fakePi  += 4 * (pow(-1,k)/(2 * k + 1));

  }

  cout << setprecision(16);
  cout << "PI (approx): " << fakePi<< "; n: " << n << endl;
  cout << "PI (acutal): 3.141592653589793" << endl;
  cout << "Decimal digits of precision: " << DBL_DIG << endl;
  cout << "Number of base 2 mantissa digits of double precision floating point value: " << DBL_MANT_DIG << endl;
  cout << "Next representable number from 3.141592653589793: " << nextafter(3.141592653589793,3.14) << endl;
}
