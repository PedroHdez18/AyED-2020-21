#include <iostream>

int main() {

int tam_vec = 5;
int A[tam_vec];
int aux[tam_vec];
int sum_val_vec_par = 0;
int sum_val_vec_impar = 0;
	
	for(int i = 0; i < tam_vec; ++i){
		std::cout << "Introduzca el valor del vector: ";
		std::cin >> A[i];
	}
std::cout << std::endl;
std::cout << "Orden normal: ";	
	for(int i = 0; i < tam_vec; ++i){
		std::cout << A[i] << " ";
	}
	for (int i = 1, j = 0; i <= tam_vec; ++i, ++j){
		aux[j] = A[i];
	}
aux[tam_vec-1] = A[0];
std::cout << std::endl;	
	
std::cout << "Orden rotado: ";
	for(int i = 0; i < tam_vec; ++i){
		std::cout << aux[i] << " ";
	}
std::cout << std::endl;
	
	for(int i = 0; i < tam_vec; ++i){
		if(A[i] % 2 == 0)
			sum_val_vec_par += A[i];
		else
			sum_val_vec_impar += A[i];
	}
std::cout << "La suma total de los valores del vector es (par): " << sum_val_vec_par;
std::cout << std::endl;
std::cout << "La suma total de los valores del vector es (impar): " << sum_val_vec_impar;
std::cout << std::endl;
	return 0;
}