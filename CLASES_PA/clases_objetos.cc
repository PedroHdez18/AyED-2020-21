#include <iostream>

//Clase = estructuraque permite la descripcion de las 
//caracteristicas (atributos) y comportamientos (metodos)
// de un conjunto de objetos.
//Un objeto es una variable de tipo clase.

[class | struct | union] NombreClase {

[private | public | protected]:
	Atributo1;
	Atributo2;
	...

[private | public | protected]:
	Metodo1;
	Metodo2;
	...

};

//-> Clase rectangulo <-
class Rectangulo {

private:
  int x, y;

public:
  void setX(int a) { x = a; }
  void setY(int b) { y = b; }

  int getX() { return x; }
  int getY() { return y; }

  int area() { return x * y; }
};
Rectangulo r;
r.setX(2);
r.setY(5);
int a = r.area(); // a = 10


//Struct Rectangulo 
struct Rectangulo {
private:
  int x, y;

public:
  void setX(int a) { x = a; }
  void setY(int b) { y = b; }

  int getX() { return x; }
  int getY() { return y; }

  int area() { return x * y; }
};
//No es conveniente usar struct como class 
//porque es menos eficiente respecto a los métodos
//y al paso de parámetros.