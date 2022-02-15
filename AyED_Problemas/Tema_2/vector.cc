#include <iostream>
#include <cmath>

using namespace std;

int main () {

const int vec = 3;
int A[vec] = {5,10,15};

int B[vec] = {32,14,18};

// Recorrido un vector en orden inverso 
// (del último al primer elemento) e impresión sus elementos
for (int i = vec-1; i >= 0; --i){
	cout << A[i] << " ";
}
std::cout << std::endl;
for (int i = 0; i < vec; ++i){
	std::cout << A[i] << " ";
}


// // Búsqueda de un elemento dentro de un vector y devolución 
// // del índice en caso de encontrarlo
// cout << endl;
// int n;
// cout << "Introducir el elemento a encontrar: ";
// cin >> n;
// for (int i = 0; i < vec; ++i){
// 	while(n == A[i]){
// 		cout << "El elemento de encuentra en la posicion: " << i+1;
// 		break;
// 	}
// }
// cout << endl;

// // Búsqueda del menor/mayor elemento de un vector
// cout << "A: ";
// int min = INFINITY, max = -INFINITY;
//   	for (int i = 0; i < vec; ++i){
//   		cout << A[i] << " ";
//   	}
// 	for (int i = 0; i < vec; i++) {
//  		if (A[i] < min) {
//  			min = A[i];
//  		}
//  		if (A[i] > max) {
//  			max = A[i];
//  		}
// 	}
// cout << endl;
// cout << "min= " << min << endl;
// cout << "max= " << max << endl;


// // Cálculo del ángulo existentes entre dos vectores 
// int producto_escalar = 0;
// double modulo_vector1 = 0;
// double modulo_vector2 = 0;
// double angulo;

// for (int i = 0; i < vec; ++i){
// 	producto_escalar += A[i] * B[i];
// }
// for (int i = 0; i < vec; ++i){
// 	modulo_vector1 += pow(A[i],2);
// 	modulo_vector2 += pow(B[i],2);
// }

// // cout << producto_escalar;
// // cout << endl;
// // cout << modulo_vector1;
// // cout << endl;
// // cout << modulo_vector2;
// // cout << endl;

// angulo = acos(producto_escalar / (sqrt(modulo_vector1) * sqrt(modulo_vector2)));
// cout << "El angulo de los 2 vectores es: " << angulo;

	return 0;
}