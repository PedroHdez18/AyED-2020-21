// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº:
// COMENTARIOS: fichero principal para probar el bitset_t
// Se compila con:
// g++ main_bitset_t.cpp bitset_t.cpp -o main_bitset_t


#include <iostream>
#include "bitset_t.hpp"

using namespace std;
using namespace AED;

int main(void)
{
	cout << "|U|= " << SIZE_U << endl;
	
	bitset_t A;
  A.insert(1);
	A.insert(5);
	A.insert(9);
	A.insert(25);

	cout << "A: " << A << endl;
	cout << "A.first_item: " << A.first_item() << endl;
	cout << "A.last_item: " << A.last_item() << endl;

	bitset_t B;
	B.insert(A);
	B.insert(31);
	B.insert(21);
	B.remove(9);

	cout << "B: " << B << endl;
	cout << "B.first_item: " << B.first_item() << endl;
	cout << "B.last_item: " << B.last_item()<< endl;

	bitset_t C;
	A.set_union(B, C);
	cout << "C = A U B" << endl << "C: " << C << endl;
	
	A.set_intersec(B, C);
	cout << "C = A (intersec) B" << endl << "C: " << C << endl;

	A.set_minus(B, C);
	cout << "C = A \\ B" << endl << "C: " << C << endl;

	A.set_dif(B, C);
	cout << "C = A (dif.sim) B" << endl << "C: " << C << endl;

	bitset_t uno;
	uno.universal();
	cout << "\nConjunto universal: ";
	cout << uno;

	uno.complemento();
	cout << "\nComplemento del conjunto: ";
	cout << uno;

	A.NAND(B, C);
	cout << "\nInterseccion negada NAND: " << A;

	A.NOR(B, C);
	cout << "\nUnion negada NOR: " << A;

	cout << "\nValor medio de un conjunto: " << A.val_med();;

	




	return 0;
}
