//meter en un vector, los elementos pares de otro

#include <iostream>
#include <vector>

int main () {

int tam_vec1 = 5;
int A[tam_vec1] = {7,9,4,6,11};

std::vector<int> B;

std::cout << "A: ";
  	for (int i = 0; i < tam_vec1; ++i){
  		std::cout << A[i] << " ";
  	}
std::cout << std::endl;

	for (int i = 0; i < tam_vec1; ++i){
		if (A[i] % 2 == 0){
			B.push_back(A[i]);
		}
	}

std::cout << "B: ";
  	for (int i = 0; i < B.size(); ++i){
  		std::cout << B[i] << " ";
  	}

	return 0;
}


