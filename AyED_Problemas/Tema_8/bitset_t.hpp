// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº:
// COMENTARIOS: fichero de definición de la clase bitset_t

#pragma once

#include <iostream>

using namespace std;

typedef long int block_t;

// |U|: cardinalidad del conjunto universal U
#define SIZE_U   (8 * sizeof(block_t))

namespace AED {

class bitset_t
{
public:
  // constructor, constructor de copia y destructor
	bitset_t(void);
	bitset_t(const bitset_t&);
	~bitset_t(void);

	// insertar o eliminar un elemento
	void insert(const int);
	void remove(const int);

  // inserta o elimina al conjunto del objeto elementos de un conjunto 
  // pasado por parámetro
	void insert(const bitset_t&);
	void remove(const bitset_t&);

  // permite saber si un elemento o un conjunto de elementos están contenidos
  // en el conjunto del objeto
	bool contains(const int) const;
	bool contains(const bitset_t&) const;

  // elimina todos los elementos del conjunto
	void clear(void);
	
	// operaciones sobre conjuntos
	void set_intersec(const bitset_t&, bitset_t&) const;
	void set_union(const bitset_t&, bitset_t&) const;
	void set_minus(const bitset_t&, bitset_t&) const;
	void set_dif(const bitset_t&, bitset_t&) const;
	int cardinality(void) const;

  // devuelve el primer y último elemento del conjunto
	int first_item(void) const;
  int last_item(void) const;

  // muestra el conjunto por pantalla
	void write(ostream& = cout) const;


	//Problemas
	void universal();
	void complemento();
	void NAND(const bitset_t&, bitset_t&) const;
	void NOR(const bitset_t&, bitset_t&) const;
	float val_med() const ;

private:
	block_t block_;
};

ostream& operator<<(ostream&, const bitset_t&);
	 
}
