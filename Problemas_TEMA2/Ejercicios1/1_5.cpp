//Búsqueda del menor/mayor elemento de un vector y la posición donde 
//se encuentra la última ocurrencia del menor/mayor, inicializando valores 
//al primer elemento del vector

#include <iostream>
#include <cmath>

void max_min();

int main() {

max_min();

	return 0;
}

void max_min() {
const int vec = 5;
int A[vec] = {5,10,15,20,25};
std::cout << "A: ";

int min = INFINITY, max = -INFINITY;

  	for (int i = 0; i < vec; ++i){
  		std::cout << A[i] << " ";
  	}

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

//Crear un vector mediante un for(creandose solo)
// int tam;				
// std::cout << "Introduzca el tamanio del vector: ";
// std::cin >> tam;
// int A[tam];
// std::cout << "A: ";

// int min = INFINITY, max = -INFINITY;

// 	// for (int i = 1; i <= tam; ++i){
// 	// 	A[i] = i;
// 	// 	std::cout << A[i] << " ";
// 	// }