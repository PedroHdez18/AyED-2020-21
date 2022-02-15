//Contabilización de las ocurrencias de los elemento dentro de un
//vector que sean mayores o iguales que otro valor dado

#include <iostream>

void ocurrencias();

int main (){

ocurrencias();

	return 0;
}

void ocurrencias(){

int valor;
int alberto{0};
std::cout << "El valor es: ";
std::cin >> valor;
const int vec = 5;
int A[vec] = {5,10,15,20,25};
std::cout << "A: [ ";

  	for (int i = 0; i < vec; ++i){
  		std::cout << A[i] << " ";
  		if (A[i] >= valor){
  			++alberto;
  		}
  	}
std::cout << "]";
std::cout << "\nEl numero de ocurrencias es: " << alberto;

}