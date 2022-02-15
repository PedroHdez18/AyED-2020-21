#include <iostream>

using namespace std;

//Factorial de un numero
int factorial(int n){
  int resultado;

  // CASO BASE
  if (n == 0) resultado = 1;
  //CASO GENERAL
  else 		  resultado = n * factorial(n-1);

  return resultado;
}

//Potencia de una numero;
int potencia(int x, float n){
  float resultado;

  //CASO BASE
  if (n == 0) resultado = 1;
  //CASO GENERAL
  else         resultado = x * potencia(x, n-1);

  return resultado;
}

// Producto de un entero a por otro entero no negativo b
int producto(int a, int b){
  int resultado;

  //CASO BASE
  if (b == 0) resultado = 0;
  //CASO GENERAL
  else        resultado = a + producto(a, b-1);

  return resultado;
}

// Sumar elementos de un vector 
int sumatorio(int *V, int i){

  if (i == 0) return V[0];
  else        return V[i] + sumatorio(V, i-1);
}

//Buscar el max elemeto de un vector
int max_elem(int *V, int i){
  if (i == 0) return V[0];
  else        return max(V[i], max_elem(V, i-1));
}

//Sucesión de Fibonacci
int fib (int n){
  if (n <= 1) return 1; 
  else        return fib(n-1) + fib (n-2);
}

// Coeficiente binomial 
int coe_bino (int n, int k){
  if (k == 0 || k == n) return 1;
  else                  return coe_bino(n-1,k-1) + coe_bino(n-1,k);

}


//Busqueda binaria recursiva
int BBR (int v[], int i, int d, int x){

  // for (int i = 0; i < 10; ++i){
  //   cout << v[i] << " ";
  // }


  if (i>d) return -1;


  int c = (i+d) / 2;

    cout << c << endl ;
  if (v[c] == x) return c;
  else if (x > v[c])  return BBR(v, i, d-1, x);
  else if (x < v[c])  return BBR(v, i-1, d, x);

}



int main() {

  // int fac;
  // cout << "Factorial de un numero (1): ";
  // cin >> fac;
  // cout << factorial(fac) << endl;

  // float n;
  // int x;
  // cout << "Potencia de x sobre n (2): ";
  // cin >> x >> n;
  // cout << potencia(x,n) << endl;
  
  // int elem1, elem2;
  // cout << "Calculo del producto de una entero a por otro entero no negativo (2): ";
  // cin >> elem1 >> elem2;
  // cout << producto(elem1, elem2) << endl;


  // cout << "Sumatoria de los elementos de un vector:" << endl;
  // int t = 10, *V = new int[t];
  // rellenar V
  // for (int i = 0; i < t; ++i){
  //   V[i] = ('1' + i);
  // }
  // for (int i = 0; i < t; ++i){
  //   cout << V[i] << " + ";
  // }
  // cout << "= ";
  // cout << sumatorio(V, t-1) << endl;
  // // delete[] V;

  // cout << "\nEncontrar el mayor elemento de un vector: ";
  // cout << max_elem(V, t-1) << endl;

  // int x;
  // cout << "Fibonacci (1):";
  // cin >> x;
  // cout << fib(x) << endl;

  // int r,s;
  // cout << "Coeficiente binomial (2): ";
  // cin >> r >> s;
  // cout << coe_bino(r,s) << endl;;


  // int t = 10, *V = new int[t];
  // rellenar V
  // for (int i = 0; i < t; ++i){
  //   V[i] = ('1' + i);
  // }


  int tamano = 10;
  int v[tamano] = {1,2,3,5,8,13,21,45,55,89};

  for (int i = 0; i < tamano; ++i){
    cout << v[i] << " ";
  }
  cout << endl;
  int izq = 1, der = 89, bus = 21;

  cout << BBR(v, izq, der, bus) << endl;


	return 0;
}