// c.h
#pragma once
class C {
 private:
  int r;
 public:
  void setR(int);
  int getR();
};

//c.cpp
#include “C.h”
void C::setR(int R) {
  r = R;
}
int C::getR() {
  return r;
}

//main.cpp
#include “C.h”
int main() {
  C obj;
  obj.setR(5);
  int a = obj.getR();
}

-> g++ -c C.cpp -> genera C.o
-> g++ main.cpp C.o -o main


Cada atributo y función miembro tiene una visibilidad 
con respecto al resto de las clases y funciones:

public: todo el mundo puede acceder y modificar el 
atributo o método. Es la opción por defecto en struct.

private: sólo los miembros de la misma clase pueden modificar, 
leer los atributos y ejecutar los métodos. Es la opción por 
defecto en class.

protected: sólo miembros de la misma clase y clases derivadas 
pueden modificar, leer los atributos y ejecutar las funciones.