#include <iostream>

int main (){

int tam_vec = 5;
int A[tam_vec] = {5,8,12,23,45};

std::cout << "Vector: ";
	for(int i = 0; i < tam_vec; ++i){
		std::cout << A[i] << " ";
	}
std::cout << std::endl;
std::cout << std::endl;

//Implementacion matriz     m filas, n columnas
const int m = 3, n = 4;
int B[m][n] = {{ 4, 5, 2, 9 },
 			   { 1, 7, 4, 2 },
 			   { 8, 6, 2, 0 }};

std::cout << "Matriz: \n";
	for (int i = 0; i < m; i++) {
	 	for (int j = 0; j < n; j++){
	 		std::cout << B[i][j] << " ";
	 	}
	std::cout << std::endl;
	}

std::cout << std::endl;

//Suma 
int suma = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			suma += B[i][j];
		}
	}
std::cout << "Suma de los elementos: " << suma;
std::cout << std::endl;
std::cout << std::endl;

//Diagonales  UN UNICO BUCLE
const int m_ = 3;
int C[m_][m_] = {{ 4, 5, 9 },
			   	 { 1, 7, 3 },
 			     { 8, 6, 2 }};

std::cout << "Matriz cuadrada: \n";
	for (int i = 0; i < m_; i++) {
	 	for (int j = 0; j < m_; j++){
	 		std::cout << C[i][j] << " ";
	 	}
	std::cout << std::endl;
	}
std::cout << std::endl;

std::cout << "Elementos de la diagonal principal: ";
	for (int i = 0; i < m_; i++){
 		std::cout << C[i][i] << " ";
	}
std::cout << std::endl; 
std::cout << std::endl;

std::cout << "Elementos de la diagonal secundaria: ";
	for (int i = 0; i < m_; i++){
 		std::cout << C[i][m_ - 1 - i] << " ";
	}
std::cout << std::endl;
std::cout << std::endl;

//Submatriz Triangular 
std::cout << "Submatriz triangular inferior: " <<std::endl;
	for (int i = 0; i < m_; i++) {
		for (int j = 0; j <= i; j++){
			std::cout << C[i][j] << " ";
		}
	 std::cout << std::endl;
	}
std::cout << std::endl;

std::cout << "Submatriz triangular superior: " << std::endl;
	for (int i = 0; i < m_; i++) {
	 	for (int j = i; j < m_; j++){
	 		std::cout << C[i][j] << " ";
	 	}
	std::cout << std::endl;
	}
std::cout << std::endl;

//Suma de Matrices
const int m__ = 2, n__ = 3;
int X[m__][n__] = {{4, 5, 9}, {1, 7, 3}},
 	Y[m__][n__] = {{8, 6, 2}, {3, 6, 1}},
 	Z[m__][n__];  //Matriz del resultado de la suma

//Primer conjunto de bucles, para hacer la operacion y 
//el segundo para recorrer la matriz sumada
for (int i = 0; i < m__; i++)
	for (int j = 0; j < n__; j++){
 		Z[i][j] = X[i][j] + Y[i][j];
	}

std::cout << "La suma de las matrices X e Y es Z= ";	
std::cout << std::endl;
for (int i = 0; i < m__; i++) {
	std::cout << (i == 1 ? " ": "");
	for (int j = 0; j < n__; j++){
 		std::cout << Z[i][j] << " ";
	}
	std::cout << std::endl;
}
	return 0;
}