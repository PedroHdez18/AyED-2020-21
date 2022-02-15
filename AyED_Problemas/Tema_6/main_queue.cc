// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// COMENTARIOS: programa de prueba del TAD cola
// Se compila con:
// g++ main_queue.cc -o main_queue

//#include <cstdio>
#include "queue_v_t.h"
#include "queue_l_t.h"


//Invertir el orden de los elementos de una cola.

template <class T> void reverse(T &src) {
  const int n = src.size();
  char A[n];
  for (int i = 0; i < n; i++){
    A[i] = src.front();
    src.pop();
  }
  for (int i = n - 1; i >= 0; i--)
    src.push(A[i]);
  src.write();
}

template <class T> void par_impar(T &src) {
	
  queue_v_t<char> cola1;
  int tamano = src.size();
  char aux;
  for (int i = 0; i < tamano; ++i){
  	aux = src.front();
  	src.pop();
  	if (i % 2 == 0){
  	  src.push(aux);
  	} else {
  	  cola1.push(aux);
  	}
  }
  cout << "Cola de impares: ";
  src.write();
  cout << "Cola de pares: ";
  cola1.write();
}

template <class T> void fusion(T &a, T &b){
	
  queue_v_t <char> ab;

  while(!a.empty() || !b.empty()){
  	if (!a.empty()){
  		ab.push(a.front());
  		a.pop();
  	}
  	if (!b.empty()){
  		ab.push(b.front());
  		b.pop();
  	}
  }
  ab.write();
}



int main(void) {
	
	queue_v_t<char> cola_vector;

	for (int i = 0; i < 10; i++){
		cola_vector.push('a' + i);
	}
	cout << "Cola original: \n";
	cout << cola_vector;
	cout << "B \t\t  F";
	cout << endl;

	// Problemas
	cout << "Invertir el orden de los elementos de una cola: \n";
	reverse(cola_vector);
	cout << endl;

	for (int i = 0; i < 10; ++i){
		cola_vector.pop();
	}

	for (int i = 0; i < 10; i++){
		cola_vector.push('a' + i);
	}

	cout << "Crear dos colas con las posis pares e impares de la original: \n";
	par_impar(cola_vector);
	cout << endl;

	queue_v_t<char> cola1;
	queue_v_t<char> cola2;

	for (int i = 0; i < 5; ++i){
		cola1.push('t' + i);
	}

		for (int i = 0; i < 6; ++i){
		cola2.push('r' + i);
	}

	cola1.write();
	cola2.write();
	

	cout << "Fusionar dos colas: ";
	fusion(cola2, cola1);
	cout << endl;


	cola1.write();

	cola1.copy(cola_vector);
	cout << cola1.contains(3) << endl;

	cola1.write();










	// while (!cola_vector.empty())
	// {
	// 	cola_vector.pop();
	// 	cout << cola_vector;
	// }

	// queue_l_t<char> cola_lista;

	// for (int i = 0; i < 10; i++)
	// {
	// 	cola_lista.push('a' + i);
	// 	cout << cola_lista;
	// }

	// cout << endl;

	// while (!cola_lista.empty())
	// {
	// 	cola_lista.pop();
	// 	cout << cola_lista;
	// }

	return 0;
}
