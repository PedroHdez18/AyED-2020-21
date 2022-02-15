//Recorrido un vector en orden inverso (del último al primer elemento) e impresión sus elementos

#include <iostream>
#include <cmath>

void vec_invertido();

int main() {

vec_invertido();
	return 0;
}


void vec_invertido() {
const int vec = 5;
int A[vec] = {5,10,15,20,25};
std::cout << "A: ";

	for (int i = 0; i < vec; ++i){
		std::cout << A[i] << " ";
	}
std::cout << "Orden normal "<< std::endl;

std::cout << "A: ";
	for (int i = vec-1; i >= 0; --i){
		std::cout << A[i] << " ";
	}
std::cout << "Orden inverso " << std::endl;

int min = INFINITY, max = -INFINITY;

	for (int i = 0; i < vec; i++) {
 		if (A[i] < min) {
 			min = A[i];
 		}
 		if (A[i] > max) {
 			max = A[i];
 		}
	}
std::cout << std::endl;
std::cout << "min= " << min << std::endl;
std::cout << "max= " << max << std::endl;
}