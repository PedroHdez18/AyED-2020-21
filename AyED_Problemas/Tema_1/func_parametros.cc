#include <iostream>

using namespace std;

int buscar (const int *vec, const int tam, const int valor){
	for (int i = 0; i < tam; i++){
		  if (vec[i] == valor)
		  	  return i;
	}
	return -1;
}

void transicion(const float a, float *v, const int n) {
  for (int i = 0; i < n; i++) {
    float x = i / (n - 1.0);
    v[i] = a * x * x * (3 - 2 * x);
  }
}


int main () {

int vec[] = {18, -79, 20, 61, 32, -53, 44};
cout << buscar(vec, 7, 32); // i ← 4
cout << buscar(vec, 7, 9); // j ← -1

	return 0;
}