#include <iostream>
#include <vector>
#include <cmath>

// PROBLEMA 1
// Diseñar una funcion que reciba como parametros un vector ya 
// inicializado de numeros enteros, su tamaño y un cierto valor
// entero y devuelva en que posocion del vector aparece dicho valor
// (no basta mostrarlo por pantalla). Si el valor no esta en el vector, 
// el valor devuelto debe ser -1.

int buscar(const int *vec, const int tam, int valor) {
  for (int i = 0; i < tam; i++) 
    if (vec[i] == valor) 
    	return i;
  
  return -1;
}

// PROBLEMA 2
// Diseñe una funcion que, recibiendo como parametros un factor a real,
// un vector v de nuimeros reales ya inicializado y su tamaño n, rellene
// v tal que vI = a * (3x^2 - 2x^3), donde x=i/(n-1.0). La funcion no 
// necesita devolver nada

void transicion(int arr[],int a, int n){
  float x=0;  
  for(int i = 0; i <= n-1; i++){
    x=i / (n-1.0);
    arr[i] = a*(3*(pow(x,2)) - 2*(pow(x,3)));
  }
}

int main(){
  
  int a= 5;
  int v[5]={};
  int n=5;
  transicion(v,a,n);
}

// PROBLEMA 2.1
//Altere ahora la funcion transicion para que reciba solo el factor
//a y el tamaño n y devuelva el vector *v, generado dinamicamente

float *transicion(int a, const int n){
  float x=0;
  float v;
  v = new float[n];
  for(int i=0;i<=n-1;i++){
    x=i/(n-1.0);
    v[i]=a(3(pow(x,2))-2(pow(x,3)));
  }
  return v;
}

int main(){

  int a= 5;
  int n=5;

  float *v=transicion(a,n);

  for(int i=0;i<=4;i++){
    std::cout<<v[i];
  }
}

//PROBLEMA 3
//Una lemniscata de Bernoulli (infinito) es una figura geometrica 
//definida pot todos los puntos (x,y) que cumplen:

const float raiz = sqrt(2);

double Bernoulli(const float d, const int t, float &x, float &y){
    float sint = sin(t);
    x = d * raiz * cos(t) / (sint * sint+1.0);
    y = x * sint;
}

