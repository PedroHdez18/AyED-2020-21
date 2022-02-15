// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 
// COMPILACIÓN: g++ -g main_stack.cc -o main_stack
// EJECUCIÓN: ./main_stack

#include <iostream>

#include "stack_v_t.h"
#include "stack_l_t.h"

using namespace std;

int main(void) {
  stack_v_t<char> pila_vector;
  cout << "Llenar la pila elemento a elemento: " << endl;
  for (int i = 0; i < 10; i++) {
    pila_vector.push('a' + i);
  }
  pila_vector.write();
  cout << endl;

// Intercambiar el orden de los dos primeros elementos en el top de la pila
   cout << "Intercambiar orden de los dos primeros elemento: " << endl;
   char letra1 = pila_vector.top();
   pila_vector.pop();
   char letra2 = pila_vector.top();
   pila_vector.pop(); 
   pila_vector.push(letra1);
   pila_vector.push(letra2);
   pila_vector.write();

// A partir de una pila generar otra con los elementos en orden inverso, 
// dejando la pila original vacía
   cout << "Crear una pila con los elementos inversos de la anterior" << endl;
   stack_v_t <char> pila_reverse;
   while(!pila_vector.empty()) {
    pila_reverse.push(pila_vector.top());
    pila_vector.pop();
   }
   cout << "Pila nueva: \n";
   pila_reverse.write();
   cout << endl;
   cout << "Pila original: \n";
   pila_vector.write();

// Eliminar todos los elementos de posiciones impares de una pila 
   cout << "Eliminar las posiciones impares de una pila: \n";
   stack_v_t <char> pila_aux;

   pila_reverse.write();
   cout << endl;

   while(!pila_reverse.empty()){
    pila_aux.push(pila_reverse.top());
    pila_reverse.pop();
   }
   while(!pila_aux.empty()){
    pila_aux.pop();
    if (!pila_aux.empty()){
      pila_vector.push(pila_aux.top());
      pila_aux.pop();
    }
   }
   pila_vector.write();

// A partir de una pila traslade sus elementos a dos pilas diferentes, 
// los que sean mayores que un valor dado a una y los restantes a otra, 
// dejando los elementos en las nuevas pilas en orden inverso al original

   char dato = 'e';
   cout << "Trasladar los elementos mayores a una valor '" << dato
   << "' a una pila y menores a otra: " << endl;

   stack_v_t <char> pila_mayor;
   stack_v_t <char> pila_menor;

   pila_vector.write();

   while(!pila_vector.empty()){
    if (pila_vector.top() > dato){
      pila_mayor.push(pila_vector.top());
      pila_vector.pop();
    } else {
      pila_menor.push(pila_vector.top());
      pila_vector.pop();
    }
   }
   cout << "Pila mayor: \n";
   pila_mayor.write();
   cout << "Pila menor: \n";
   pila_menor.write();


// Dada una pila obtener el máximo de sus elementos en base a ir desapilando 
// los dos primeros elementos en el top de la pila y reemplazarlos por el 
// máximo de ambos sucesivamente

   cout << "Obtener el maximo de los elementos desapilando dos a dos: " << endl;

   // for (int i = 0; i < 10; i++) {
   //  pila_vector.push('a' + i);
   // }
   // pila_vector.write();
   // cout << endl;

   bool out = false;
   while(!pila_menor.empty() && !out) {
     char elem1 = pila_menor.top();
     pila_menor.pop();
     if (!pila_menor.empty()){
       char elem2 = pila_menor.top();
       pila_menor.pop();
       if (elem2 > elem1){
         elem2 = elem1;
       } else {
        out = true;
       }
       pila_menor.push(elem1);
     }
   }
   pila_menor.write();
   cout << endl;



  // while (!pila_vector.empty()) {
  //   pila_vector.pop();
  //   // pila_vector.write();
  //   // cout << endl;
  // }


  stack_l_t<char> pila_lista;
  cout << "********** PILA LISTA **********" << endl;
  for (int i = 0; i < 10; i++) {
    pila_lista.push('a' + i);
  }
  pila_lista.write();
  cout << endl;


// Intercambiar el orden de los dos primeros elementos en el top de la pila
   cout << "Intercambiar orden de los dos primeros elemento: " << endl;
   char dato1 = pila_lista.top();
   pila_lista.pop();
   char dato2 = pila_lista.top();
   pila_lista.pop(); 
   pila_lista.push(dato1);
   pila_lista.push(dato2);
   pila_lista.write();

  // while (!pila_lista.empty()) {
  //   pila_lista.pop();
  //   // pila_lista.write();
  //   // cout << endl;
  // }
	
  return 0;
}
