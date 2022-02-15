// AUTOR: Pedro Hernandez Alonso
// FECHA: 20-03-2021
// EMAIL: alu0101423944@ull.edu.es
// VERSION: 4.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef SPARSE_VECTORT_H_
#define SPARSE_VECTORT_H_

#include <iostream>
#include <math.h>  // fabs

#include "vector_t.h"
#include "pair_t.h"

#define EPS 1.0e-6

typedef pair_t<double> pair_double_t;
typedef vector_t<pair_double_t> pair_vector_t;

class sparse_vector_t {
 public:
  // constructores
  sparse_vector_t(const int = 0);
  sparse_vector_t(const vector_t<double>&,
		  const double = EPS); // constructor normal
  sparse_vector_t(const sparse_vector_t&);  // constructor de copia



  // operador de asignación
  sparse_vector_t& operator=(const sparse_vector_t&);
  sparse_vector_t par_impar();

  // destructor
  ~sparse_vector_t();
  
  // getters
  int get_nz(void) const;
  int get_n(void) const;

  // getters-setters
  pair_double_t& at(const int);
  pair_double_t& operator[](const int);
  
  // getters constantes
  const pair_double_t& at(const int) const;
  const pair_double_t& operator[](const int) const;

  // E/S
  void write(std::ostream& = std::cout) const;

 private:
  pair_vector_t pv_;  // valores + índices
  int nz_;            // nº de valores distintos de cero = tamaño del vector
  int n_;             // tamaño del vector original

  // bool IsNotZero(const double, const double = EPS) const;
};


bool IsNotZero(const double val, const double eps = EPS) {
  return fabs(val) > eps;
}

sparse_vector_t::sparse_vector_t(const int n) : pv_(n), nz_(0), n_(n) {}

// FASE II
sparse_vector_t::sparse_vector_t(const vector_t<double>& v, const double eps) : pv_(), nz_(0), n_(0) {   // pv_() = valor de cada una de las celdas
                                                                                                         // nz_() = indice del sparce vector
n_ = v.get_size();                                                                                       // n_()  = indicel total del vetor
  for (int i = 0; i < n_; i++){                                                                          
    if (IsNotZero(v[i], eps)){                                                                              
      nz_++;
    }
  }
pv_.resize(nz_);
  for (int i = 0, j = 0; i < n_; i++){
    if (IsNotZero(v[i], eps)){
      pair_t<double> temp(v.at(i),i);
      pv_.set_val(j,temp);
      j++;
    }
  }
}

// constructor de copia
sparse_vector_t::sparse_vector_t(const sparse_vector_t& w) {
  *this = w;  // se invoca directamente al operator=
}

// operador de asignación
sparse_vector_t& sparse_vector_t::operator=(const sparse_vector_t& w) {
  nz_ = w.get_nz();
  n_ = w.get_n();
  pv_ = w.pv_;

  return *this;
}

sparse_vector_t::~sparse_vector_t() {}

inline int sparse_vector_t::get_nz() const {
  return nz_;
}

inline int sparse_vector_t::get_n() const {
  return n_;
}

pair_double_t& sparse_vector_t::at(const int i) {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

pair_double_t& sparse_vector_t::operator[](const int i) {
  return at(i);
}

const pair_double_t& sparse_vector_t::at(const int i) const {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

const pair_double_t& sparse_vector_t::operator[](const int i) const {
  return at(i);
}

// E/S
void sparse_vector_t::write(std::ostream& os) const { 
  os << get_n() << "(" << get_nz() << "): [ ";
  for (int i = 0; i < get_nz(); i++)
    os << pv_[i] << " ";
	os << "]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const sparse_vector_t& sv) {
  sv.write(os);
  return os;
}

////////////////////////////////////////////////
//               MODFICACION_                //
////////////////////////////////////////////////
sparse_vector_t sparse_vector_t::par_impar(){
  vector_t<double> sp_v(2);
  for (int i = 0; i < get_nz(); ++i){
    if (at(i).get_inx() % 2 == 0){
      sp_v.at(0) += at(i).get_val(); 
    } else {
      sp_v.at(1) += at(i).get_val();
    }
  }
  sparse_vector_t vec_fin(sp_v);
  return vec_fin;
}



// sparse_vector_t sparse_vector_t::sum(const sparse_vector_t &v){
//   sparse_vector_t sp_v;
// int k = 0;
//   for (int i = 0, j = 0; i < get_nz();){
//     if (at(i).get_inx() == v.at(j).get_inx()){
//       k++, i++, j++;
//     } else if (at(i).get_inx() > v.at(j).get_inx()){
//       k++, j++;
//     } else if (at(i).get_inx() < v.at(j).get_inx()){
//       k++, i++;
//     }
//   }
//   sp_v.nz = k;
//   sp_v.pv_.rezize(k);      // valores + índices

//   for (int i = 0, j = 0, f = 0; f<k; f++){
//     if (at(i).get_inx() == v.at(j).get_inx()){
//       pair_t<double> pd_t(at(i).get_val()+v.at(j).get_val(), at(i).get_inx());
//       sp_v.at(m) = pd_t;
//     }
//   }
// }







#endif  // SPARSE_VECTORT_H_
