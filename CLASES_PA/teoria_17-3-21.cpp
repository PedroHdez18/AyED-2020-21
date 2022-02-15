//vector disperso o escaso (sparse vector)
//es una manera de expresar un vectores grande, 
//con elementos = 0, pues el vector escaso es aquel que 
//descartes los valores = 0.
//Motivo: Ahorrar memoria
//para que una clase almacene un vector escaso necesitaremos los 
//siguietes atributos
	// double* val_;    valor de la "casilla"
	// int* inx_;		indice del valor (numero casilla)
	// int nz_;			vector escaso
	// int n_;			vector normal
//metodos 
	// ● Constructor
	// ● Constructor de copia
	// ● Destructor
	// ● Entrada/Salida
	// ● Operaciones


#include <iostream>

// El algoritmo del producto escalar entre un vector
// normal (denso) v y un vector disperso sv

double producto = 0;
	for (int i = 0; i < nz_; i++){
		producto += val_[i] * v[inx_[i]];
	}




//PRACTICA 3  POLINOMIOS

//el indice mayor de P(x), sera el tamaño del vector
// ejemplo: P(x) = 2x^3 + 3x + 2;
//v={2,0,3,2}
//sv={2,3,2}  hay que indicar e indice





