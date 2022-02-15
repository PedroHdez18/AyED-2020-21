// AUTOR: Pedro Hernandez Alonso
// FECHA: 24-04-21
// EMAIL: alu0101423944@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef STACKL_H_
#define STACKL_H_

#include <iostream>
#include <iomanip>
#include <cassert>

#include "dll_t.h"

// Clase para pilas mediante estructura dinámica
template<class T> class stack_l_t {
 public:	
  // constructor
  stack_l_t(void) : l_() {}

  // destructor
  ~stack_l_t(void) {}

  // operaciones
  void push(const T&);
  void pop(void);
  const T& top(void) const;
  bool empty(void) const;

  // E/S	
  std::ostream& write(std::ostream& os = std::cout) const;

private:
  dll_t<T> l_;
  int sum_pair_(void) const;
};


// operaciones
template<class T> void stack_l_t<T>::push(const T& dato) {
  dll_node_t<T>* nodo = new dll_node_t<T>(dato);
  assert(nodo != NULL);
  l_.push_front(nodo);
}

template<class T> void stack_l_t<T>::pop(void) {
  assert(!empty());
  delete l_.pop_front();

  std::cout << std::endl;
  std::cout << "Suma de elementos pares en la pila: " << sum_pair_() << std::endl;
  std::cout << std::endl;
}

template<class T> const T& stack_l_t<T>::top(void) const {
  assert(!empty());
  return l_.get_head()->get_data();
}

template<class T> bool stack_l_t<T>::empty(void) const {
  return l_.empty();
}

// E/S
template<class T> std::ostream& stack_l_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = l_.get_head();
  while (aux != NULL) { 
    std::cout << std::endl;
    os << " [ " << std::setw(2) << aux->get_data() << " ]" << std::endl;
    aux = aux->get_next();
  }
  char b = 238;
  os << " " << b << b << b << b << b << b << std::endl;
    return os;
}

template<class T> int stack_l_t<T>::sum_pair_(void) const {
  
  int suma_pares = 0;

  dll_node_t<T>* aux = l_.get_head();

  while (aux != NULL){

    if (aux->get_data() % 2 == 0) {
      suma_pares += aux->get_data();
    }
    aux = aux->get_next();
    
  }
  return suma_pares;
}


#endif  // STACKL_H_
