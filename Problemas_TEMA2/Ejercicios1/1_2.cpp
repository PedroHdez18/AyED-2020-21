//Almacenaiento en un vector de los n primeros términos de la Sucesión de Fibonacci

#include <iostream>
#include <vector>

void Fibonacci();


int main() {

Fibonacci();
  return 0;
}

void Fibonacci() {

do
{
    unsigned long long aux = 1, fib = 0, num_fin;
  
  std::cout << "Ingrese un numero para la sucesion de fibonacci: ";
  std::cin >> num_fin;
  if (num_fin == 0) break;
  int vec = num_fin;
  int A[vec];
    if(num_fin > 0) {
      for(int i = 1; i <= num_fin; i++) {
        //std::cout << "[" << fib << "] ";
        aux += fib; /* lo mismo que aux = aux + fib; */
        fib = aux - fib;
        A[i] = fib;
        std::cout << A[i] << " ";
      }
    } else {
      std::cout << "El numero debe ser mayor a cero!!" << std::endl;
    }
  std::cout << "\n";
} while (true);
    std::cout << "FIN DEL PROGRAMA. " << std::endl;
  }

// int num_final, aux_1, aux_2, n;


