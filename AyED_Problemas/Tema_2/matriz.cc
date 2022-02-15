#include <iostream>

using namespace std;

int main () {

const int m = 3, n = 4;
int A[m][n] = {{ 4, 5, 2, 9 },
 			   { 1, 7, 4, 2 },
    		   { 8, 6, 2, 0 }};


// // Recorrido de una matriz por columnas/filas e 
// // impresión de sus elementes en ese orden
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < m; j++){
//  		cout << A[j][i] << " ";
// 	}
//  cout << endl;
// }

// //Suma de los elementos con valor positivo de una matriz
// int suma = 0;
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < m; j++){
// 		if (A[j][i] >= 0){
// 			suma += A[j][i];
// 		}
// 	}
// }
// cout << "suma = " << suma;

// // Recorrido de la diagonal principal/secundaria 
// // incluso en matrices no cuadradas
// cout << "Elementos de la diagonal principal: ";
// for (int i = 0; i < m; i++)
// 	cout << A[i][i] << " ";
// cout << endl;

// cout << "Elementos de la diagonal secundaria: ";
// for (int i = 0; i < m; i++)
//  	cout << A[i][m - 1 - i] << " ";
// cout << endl;

// for (int i = 0; i < m; ++i){
// 	for (int j = 0; j < n; ++j){
// 		cout << A[i][j] << " ";
// 	}
// 	cout << endl;
// }




const int h = 3;
int B[h][h] = {{ 4, 5, 9 },
 			   { 1, 7, 3 },
               { 8, 6, 2 }};


for (int i = 0; i < m; ++i){
	cout << B[i][i] << " ";
}
cout << endl;


for (int i = 0; i < m; i++) {
 for (int j = 0; j <= i; j++)
 	cout << B[i][j] << " ";
 cout << endl;
}
cout << endl;


int suma = 0;
for (int i = 0; i < m; i++) {
 for (int j = i; j < m; j++){
 	cout << B[i][j] << " ";
 	suma += B[i][j];
 }
 cout << endl;
}
cout << suma;


	return 0;
}