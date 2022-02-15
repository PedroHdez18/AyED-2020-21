// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// COMENTARIOS: ejemplos de recursividad
// Se compila con:
// g++ recursividad_v2.cpp -o recursividad_v2

#include <iostream>
#include <iomanip>
#include <cstdio>

#include "vector_t.hpp"
#include "stack_l_t.hpp"

using namespace std;
using namespace AED;

#define KEY cout << "Pulse una tecla..."; getchar()

// factorial recursivo
unsigned int factorial(const unsigned int n, const bool traza = false, 
                       const int w = 1)
{
  if (n == 0)
  { if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "1" << " (caso base)" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    return 1;
  }
  else
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << n << " * factorial(" << n - 1 << ")" << endl;
    }
    
    unsigned int f = factorial(n - 1, traza, w + 1);

    if (traza)
    {
      cout << setfill('\t') << setw(w) << n << "   *   " << f << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }

    return n * f;
  }
  
  // el mismo código en una sola línea
  // return n == 0 ? 1 : n * factorial(n - 1);
}



// exponenciación recursiva
int potencia(const int base, const unsigned int expo, const bool traza = false, 
             const int w = 1)
{ 
  if (expo == 0)
  { if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "1" << " (caso base)" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    
    return 1;
  }
  else
  { 
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << base << " * potencia(" << base << "," << expo - 1 << ")" << endl;
    }
    
    int p = potencia(base, expo - 1, traza, w + 1);

    if (traza)
    {
      cout << setfill('\t') << setw(w) << base << "   *   " << p << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    
    return base * p;
  }
  
  // el mismo código en una sola línea
  // return expo == 0 : 1 potencia(base, expo - 1);
}



// producto recursivo
int producto(const int a, const unsigned int b, const bool traza = false, 
             const int w = 1)
{ 
  if (b == 0)
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "0" << " (caso base)" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }

    return 0;
  }
  else
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << a << " + producto(" << a << ", " << b - 1 << ")" << endl;
    }
    
    int p = producto(a, b - 1, traza, w + 1);

    if (traza)
    {
      cout << setfill('\t') << setw(w) << a << "   +   " << p << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    
    return a + p;
  }
  
  // el mismo código en una sola línea
  // return b == 0 ? 0 : a + producto(a, b - 1);
}



// sumatorio sobre un vector
int sumatorio(const vector_t<int>& V, const unsigned int i, 
              const bool traza = false, const int w = 1)
{
  if (i == 0)
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "V" << "[0] (caso base)" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }

    return V[0];
  }
  else
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << V[i] << " + sumatorio(V, i-1=" << i - 1 << ")" << endl;
    }
    
    int s = sumatorio(V, i - 1, traza, w + 1);

    if (traza)
    {
      cout << setfill('\t') << setw(w) << V[i] << "   +   " << s << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    
    return V[i] + s;
  }
  
  // el mismo código en una sola línea
  // return i == 0 ? V[0] : V[i] + sumatorio(V, i - 1);
}



// maximo de un vector
int maximo(const vector_t<int>& V, const unsigned int i, 
           const bool traza = false, const int w = 1)
{
  if (i == 0)
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "V" << "[0]=" << V[0] << " (caso base)" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }

    return V[0];
  }
  else
  {
    if (traza)
    {
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
      cout << setfill('\t') << setw(w) << "m" << "ax(V[" << i << "]=" << V[i] << ", maximo(V, i-1=" << i - 1 << ")" << endl;
    }
    
    int m = maximo(V, i - 1, traza, w + 1);

    if (traza)
    {
      cout << setfill('\t') << setw(w-1) << " " << "  max(V[i]=" << V[i] << ", " << m << ")" << endl;
      cout << setfill('\t') << setw(w) << "|" << "|" << endl;
    }
    
    return max(V[i], m);
  }

  // el mismo código en una sola línea
  // return i == 0 ? max(V[i], maximo(V, i - 1));
}



// elemento n-ésimo de la sucesión de Fibonacci
unsigned fib(const unsigned n)
{
  if (n == 0 || n == 1) return 1;
  else                  return fib(n - 1) + fib(n - 2);

  // el mismo código en una sola línea
  // return (n == 0 || n == 1) ? 1 : fib(n-1) + fib(n-2);
}



// coeficiente binomial
unsigned int C(const unsigned int n, const unsigned int k)
{ 
  if (k == 0 || k == n) return 1;
  else                  return C(n - 1, k - 1) + C(n - 1, k);
  
  // el mismo código en una sola línea
  // return (k == 0 || k == n) ? 1 : C(n - 1, k - 1) + C(n - 1, k);
}



// búsqueda binaria recursive
int BBR(vector_t<int>& v, int i, int d, int x)
{
  if (i > d) return -1; // caso base: fracaso
  
  int c = (i + d) / 2;
  
  if (v[c] == x) return c; // caso base: éxito
  
  // casos generales
  if (x < v[c])  return BBR(v,     i, c - 1, x);
  if (v[c] < x)  return BBR(v, c + 1,     d, x);
}


// algoritmo de partición del vector
int partir(vector_t<int>& v, const int ini, const int fin)
{ 
  int i = ini + 1, d = fin, p = v[ini]; //v[fin];
  do {
    while (i <= d && v[i] <= p) i++;
    
    while (i <= d && p <= v[d]) d--;
    
    if (i < d) swap(v[i++], v[d--]);

  } while (i <= d);
  
  swap(v[ini], v[d]);
  //swap(v[fin], v[d]);
  
  return d;
}



// ordenación rápida
void OR(vector_t<int>& v, const int i, const int d)
{ 
  int pivote;
  if (i < d)
  {
    pivote = partir(v, i, d);
    OR(v, i, pivote - 1);
    OR(v, pivote + 1, d);
  }
}



// otra versión del factorial simulando una pila
unsigned factorial_simu(const unsigned n)
{
  unsigned resultado;
  if (n == 0) resultado = 1;
  else
  { 
    cout << "push " << n - 1 << endl;
    resultado = n * factorial_simu(n - 1);
    cout << "pop " << resultado << endl;
  }
  return resultado;
}



// factorial usando una pila, simulando recursividad
unsigned factorial_pila(unsigned n)
{
  stack_l_t<int> pila;
  int resultado = 1;

  while (n > 0)
  {
    cout << "push " << n - 1 << endl;
    pila.push(n--);
  }

  while (!pila.empty())
  {
    resultado *= pila.top();
    pila.pop();
    cout << "pop " << resultado << endl;
  }
  
  return resultado;
}



int main()
{
  cout << "*** FACTORIAL x! RECURSIVO ***" << endl;
  unsigned int x;
  cout << "x ? ", cin >> x;
  // sin traza
  cout << "x! = " << factorial(x) << endl;
  // con traza
  cout << factorial(x, true) << endl;
  
  cout << endl << "*** EXPONENCIACIÓN b^e RECURSIVA ***" << endl;
  unsigned int e;
  int b;
  cout << "b ? ", cin >> b;
  cout << "e ? ", cin >> e;
  // sin traza
  cout << "b^e = " << potencia(b, e) << endl;
  // con traza
  cout << potencia(b, e, true) << endl;
  
  cout << endl << "*** PRODUCTO A*B RECURSIVO ***" << endl;
  int A;
  unsigned int B;
  cout << "A ? ", cin >> A;
  cout << "B ? ", cin >> B;
  // sin traza
  cout << "A * B = " << producto(A, B) << endl;
  // con traza
  cout << producto(A, B, true) << endl;
  
  cout << endl << "*** SUMATORIO SOBRE UN VECTOR ***" << endl;
  int N = 9;
  vector_t<int> V(N);
  for (int i = 0; i < N; i++)
    V[i] = i + 1;
  cout << V << endl;
  // sin traza
  cout << "Suma de V= " << sumatorio(V, N - 1) << endl;
  // con traza
  cout << sumatorio(V, N - 1, true) << endl;
  KEY; getchar(); // porque da problemas y se salta el primer getchar()

  cout << endl << "*** MAXIMO DE UN VECTOR ***" << endl;
  V[3] = N + 1;
  cout << V << endl;
  // sin traza
  cout << "Máximo de V= " << maximo(V, N - 1) << endl;
  // con traza
  cout << maximo(V, N - 1, true) << endl;
  KEY;

  cout << endl << "*** ELEMENTO N-ÉSIMO DE LA SUCESIÓN DE FIBONACCI RECURSIVO ***" << endl;
  unsigned int n;
  cout << "n ? ", cin >> n;
  cout << "Fibonacci(n) = " << fib(n) << endl;
  cout << endl;

  cout << endl << "*** COEFICIENTE BINOMIAL C(n, k) RECURSIVO ***" << endl;
  unsigned int k;
  cout << "n ? ", cin >> n;
  cout << "k ? ", cin >> k;
  assert(k <= n);
  cout << "C(n, k) = " << C(n, k) << endl;
  cout << endl;
  
  cout << endl << "*** BÚSQUEDA BINARIA RECURSIVA ***" << endl;
  for (int i = 0; i < N; i++)
    V[i] = 2 * i + 1;
  cout << V << endl;
  
  int X;
  cout << "X ? ", cin >> X;
  int pos = BBR(V, 0, N - 1, X);
  
  cout << "El valor " << X << " está en la posición: " << pos;
  cout << (pos < 0 ? " (NO ENCONTRADO)" : "") << endl;
  KEY; getchar(); // porque da problemas y se salta el primer getchar()

  cout << endl << "*** ORDENACIÓN RÁPIDA RECURSIVA ***" << endl;
  for (int i = 0; i < N; i++)
    V[i] = N - i;
  
  cout << "Vector original= ";
  cout << V << endl;
  
  OR(V, 0, N - 1);
  
  cout << "Vector ordenado= ";
  cout << V << endl;
  KEY;

  cout << endl << "*** FACTORIAL SIMULANDO UNA PILA ***" << endl;
  cout << "x ? ", cin >> x;
  unsigned f = factorial_simu(x);
  cout << "x! = " << f << endl;
  
  cout << endl << "*** FACTORIAL USANDO UNA PILA ***" << endl;
  f = factorial_pila(x) ;
  cout << "x! = " << f << endl; 
  
  return 0;
}