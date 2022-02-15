// AUTOR: Pedro Hernandez Alonso
// FECHA: 24-04-21
// EMAIL: alu0101423944@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase RPN (Reverse Polish Notation)

#ifndef RPNT_H_
#define RPNT_H_

#include <iostream>
#include <cctype>
#include <cmath>
//#include <cstdlib>

#include "queue_l_t.h"

// Clase RPN (Reverse Polish Notation)
template <class T> class rpn_t {
 public:
  // constructor
 rpn_t(void) : stack_() {}

  // destructor
  ~rpn_t() {}

  // operaciones
  const int evaluate(queue_l_t<char>&);

 private: 
  T stack_;
  void operate_(const char operador);
  void suma();
};


// operaciones
template<class T> const int rpn_t<T>::evaluate(queue_l_t<char>& q) {
  while (!q.empty()) 	{
    char c = q.front();
    
    q.pop();
    std::cout << "Sacamos de la cola un caracter: " << c;

    if (isdigit(c)) {
      int i = c - '0';
      stack_.push(i);         //meter i en pila (stack_)

      std::cout << " (es un digito) " << std::endl << "   Lo metemos en la pila..." << std::endl;
    } else {
      std::cout << " (es un operador)" << std::endl;
      operate_(c);
    }
  }
  // stack_.write();      //mostrar pila por consola
  return stack_.top();
}

template<class T> void rpn_t<T>::operate_(const char c) {
  // assert(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == 'r' || c == 'c' || c == 'l');

  int operando1;
  int operando2;

  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^'){
    operando1 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       //elimando de la pila
    std::cout << "   Sacamos de la pila un operando: " << operando1 << std::endl;
    operando2 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       //elimando de la pila
    std::cout << "   Sacamos de la pila otro operando: " << operando2 << std::endl;

  } else if (c == 'r' || c == 'c' || c == 'l'){
    operando1 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       //elimando de la pila
    std::cout << "   Sacamos de la pila un operando: " << operando1 << std::endl;
  } else {
  std::cout << "No se reconoce ese operando";
  exit(EXIT_SUCCESS);
  }

  switch (c) {
    case '+':
    stack_.push(operando2+operando1);
      break;
    
    case '-':
    stack_.push(operando2-operando1);
      break;

    case '*':
    stack_.push(operando2*operando1);
      break;

    case '/':

      if (operando2 > operando1){
        stack_.push(operando2/operando1);   
      } else {
        stack_.push(operando1/operando2);
      }
      break;

    case '^':
    stack_.push(pow(operando2,operando1));
      break;

    case 'r':
    stack_.push(sqrt(operando1));
      break;

    case 'c':
    stack_.push(pow(operando1,2));
      break;

    case 'l':
    stack_.push(log2(operando1));
      break;
  }
  std::cout << "   Metemos en la pila el resultado: " << stack_.top() << std::endl;
}



#endif  // RPNT_H_
