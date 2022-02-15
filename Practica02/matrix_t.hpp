// AUTOR: Pedro Hernandez Alonso
// FECHA: 11-03-2021
// EMAIL: alu0101423944@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>

#include "vector_t.hpp"

using namespace std;

template<class T>
class matrix_t
{
public:                                               //Elementos públicos
  matrix_t(const int = 0, const int = 0);             //Constructor
  ~matrix_t();                                        //Destructor
  
  void resize(const int, const int);
  
  // getters
  int get_m(void) const;                              //los métodos para acceder a los atributos
  int get_n(void) const;                              //los métodos para acceder a los atributos
    
  // getters-setters
  T& at(const int, const int);                        //los métodos para lectura desde teclado y escritura a pantalla  (setters)
  T& operator()(const int, const int);                //los métodos para lectura desde teclado y escritura a pantalla  (setters)
  
  // getters constantes
  const T& at(const int, const int) const;            //los métodos para acceder a los atributos  (getters)
  const T& operator()(const int, const int) const;    //los métodos para acceder a los atributos  (getters)
  
  // operaciones y operadores
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  void write(ostream& = cout) const;
  void read(istream& = cin);

private:                                              //Elementos privados
  int m_, n_; // m_ filas y n_ columnas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};



template<class T>
matrix_t<T>::matrix_t(const int m, const int n)
{ 
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
matrix_t<T>::~matrix_t()
{}



template<class T>
void 
matrix_t<T>::resize(const int m, const int n)
{
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
inline int
matrix_t<T>::get_m() const
{
  return m_;
}



template<class T>
inline int
matrix_t<T>::get_n() const
{
  return n_;
}



template<class T>
T&
matrix_t<T>::at(const int i, const int j)
{
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
T&
matrix_t<T>::operator()(const int i, const int j)
{
  return at(i, j);
}



template<class T>
const T&
matrix_t<T>::at(const int i, const int j) const
{
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
const T&
matrix_t<T>::operator()(const int i, const int j) const
{
  return at(i, j);
}



template<class T>
void
matrix_t<T>::write(ostream& os) const
{ 
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j)
      os << at(i, j) << "\t";
    os << endl;
  }
  os << endl;
}



template<class T>
void
matrix_t<T>::read(istream& is)
{
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j)
      is >> at(i, j);
}


template<class T>
inline
int
matrix_t<T>::pos(const int i, const int j) const
{
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}



// FASE III: producto matricial
template<class T>
void
matrix_t<T>::multiply(const matrix_t<T>& A, const matrix_t<T>& B)
{
  assert(A.get_m() == B.get_n());           //Comprobar si las m(filas) y n(columnas) son iguales
  resize(A.get_m(), B.get_n());             //crea una nueva matriz de m*n

      // Generamos la matriz C a partir de la multiplicacion de A B.
  double aux = 0;
  for(int i=1; i<=A.get_m(); ++i){
      for(int j=1; j<=B.get_n(); ++j){
          for(int z=1; z<=A.get_n(); ++z){
              aux = aux + A(i,z) * B(z,j);
          }
      at(i,j) = aux;
      aux = 0;
      }
  }
}
