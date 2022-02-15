#include <iostream>

int main (){

int vec = 3;
int A[vec];

std::cin >> A[0];
std::cin >> A[1];
std::cin >> A[2];

for (int i = 0; i < vec; ++i){
	std::cout << A[i] << " ";
}

}