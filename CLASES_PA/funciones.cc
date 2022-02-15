//  Estrcturas y punteros  //

#include <iostream>

struct Par {unsigned char a, b; };

int main () {
	Par i = {3, 7};

	Par *j = new Par;
	j->a = 2;
	j->b = 9;

	Par *k = new Par[2];
	k[0].a = i.a;        // i.a=3
	k[0].b = i.b;        // a.b=7
	k[1].a = j->a;
	k[1].b = j->b;
}

//inline sugiere que maneje una func como si fuera
//una macro, de forma eficiente y automatica 
#define SQR(x)  (x)*(x)
int a = SQR(2);     // a=(2)*(2)=4
int b = SQR(2+3);   // b=(2+3)*(2+3)=25
int c = SQR(a++);   // c=(a++)*(a++)=20, y a=6

inline int sqr(int x) {return x*x; }
int a = sqr(2);     // a=2*2=4
int b = sqr(2+3);   // b=5*5=25
int c = sqr(a++);   // c=a*a=16, y a=5


//SOBRECARGA DE FUNCIONES
void print(int);
void print(const char*);
void print(float);


