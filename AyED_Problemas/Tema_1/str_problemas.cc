#include <iostream>
// #include <cstring>

using namespace std;


int strlen(const char *c){
  int i = 0;
  for (i = 0; c[i] != '\0'; i++);
  return i;
}

char *strcpy(char *a, const char *b){
  int i;
  for (i = 0; b[i] != '\0'; ++i){
  	a[i] = b[i];
  }
    return a;
}

char *strcat(char *a, const char *b){
  int i, j;

  for (i = 0; a[i] != '\0'; ++i);
  for (j = 0; b[j] != '\0'; i++, j++){
	a[i] = b[j]; 
  }
  a[i] = '\0';
	return a;
}

int strcmp(const char *a, const char *b){
  int i;
  
  for (i = 0; a[i] != '\0' && a[i] == b[i]; ++i);
  return a[i] - b[i];
}

char *strstr(char *a, const char *b){
  
  for (int i = 0, j; a[i] != '\0'; i++) {
    for (j = 0; a[i+j] == b[j] && b[j] != '\0'; j++);

    if (b[j] == '\0') 
      return a + i;
  }
  return NULL;
}



int main () {

  cout << "Problema 1: Longitud de una cadena";
  cout << endl;
  cout << strlen("algoritmos");

  cout << endl;
  cout << endl;

  cout << "Problema 2: Copia el contenido de la cadena y lo devuelve en un puntero";
  cout << endl;
  char x[10];
  cout << strcpy(x, "asignatura");

  cout << endl;
  cout << endl;

  cout << "Problema 3: Copia b al final de a y devuelve el puntero a";
  cout << endl;
  char y[10] = "tu";
  cout << strcat(y, "asignatura");

  cout << endl;
  cout << endl;

  cout << "Problema 4: Comprobacion de cadenas";
  cout << endl;
  cout << strcmp("alfa", "algo");
  cout << endl;
  cout << strcmp("rho", "delta");
  cout << endl;
  cout << strcmp("beta", "beta");

  cout << endl;
  cout << endl;

  cout << "Problema 5: Puntero con la posicion";
  cout << endl;
  cout << strstr("que te digo", "d");


	return 0;
}


