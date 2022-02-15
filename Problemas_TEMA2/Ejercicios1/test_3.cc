#include <iostream>

int main (){

int tam_vec = 8;
int A[tam_vec] = {1,0,2,3,4,0,5,0};
int nz = 0;

std::cout << "A: ";
	for (int i = 0; i < tam_vec; ++i){
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

for (int i = 0; i < tam_vec; ++i){
	if (A[i] == 0){
		nz++;
	}
	else{
		std::cout << A[i] << " ";
	}
}
std:: cout << "numero de ceros: " << nz;



	return 0;
}