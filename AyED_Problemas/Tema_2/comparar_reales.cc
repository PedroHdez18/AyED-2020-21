// compilar con:
// g++ comparar_reales.cc -o comparar_reales
//
// ejecutar con:
// ./comparar_reales

#include <iostream>
#include <iomanip>
#include <cmath>

#define EPS 1e-6

using namespace std;

bool igual(const double a, const double b, const double epsilon = EPS) {
  // |a - b| < ϵ
  return (fabs(a - b) < epsilon);
}

int main() {
  double a = 1/3.0,
         b = 0.333; // ir aumentando los decimales: 0.3333, 0.33333, etc

  cout << fixed << setprecision(10) << "a= " << a << ", b = " << b << endl;
  
  if (a == b) cout << "a == b" << endl;
  else        cout << "a != b" << endl;

  if (igual(a, b)) cout << "a es igual a b" << endl;
  else             cout << "a NO es igual a b" << endl;

  return 0;
}
