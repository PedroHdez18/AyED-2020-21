#include <iostream>

using namespace std;

struct Par{ unsigned char a, b; };

int main () {

cout << "Una variable i de tipo Par con a = 3 y b = 7.";
cout << endl;
Par i = {3,7};

cout << "Un puntero j a un dato Par creado dinámicamente.";
cout << endl;
Par *j = new Par;
j->a = 2;
j->b = 9;

cout << "Un array k (estático o dinámico) de dos Par, cuyos elementos tengan los mismos valores que i y *j";
cout << endl;
Par *k = new Par[2];
k[0].a = i.a;
k[0].b = i.b;
k[1].a = j->a;
k[1].b = j->b;

	return 0;
}