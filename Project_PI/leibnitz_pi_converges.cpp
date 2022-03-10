#include <iostream>
#include <cmath>
#include <iomanip>
#include <cfloat>
using namespace std;
int main(int argc, const char * argv[]) {
  int n;
  int k;
  double fakePi;

  n = 2;
  for(n; n <= 1048576; n *=2){
      fakePi = 0;
    for(k = 0; k <= n; k++){
        fakePi  += 4 * (pow(-1,k)/(2 * k + 1));
    }
    cout << setprecision(16);
    cout << "PI: " << fakePi<<"; n: " << n << endl;
  }

}
