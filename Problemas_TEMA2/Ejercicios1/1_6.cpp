//Cálculo del módulo de un vector

#include <iostream>

int main() {

const int vec = 3;
int A[vec] = {1,3,5};
int B[vec] = {2,4,6};
int prod_scalar = 0;

std::cout << "A: ";
  	for (int i = 0; i < vec; ++i){
  		std::cout << A[i] << " ";
  	}
std::cout << std::endl;

std::cout << "B: ";
  	for (int i = 0; i < vec; ++i){
  		std::cout << B[i] << " ";
  	}
  	for (int i = 0; i < vec; ++i){
  		prod_scalar += A[i] * B[i];
  	}
  	
std::cout << "\nEl producto esclar de los 2 vectores es: " << prod_scalar;

	return 0;
}