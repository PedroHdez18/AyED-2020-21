// Comprobar si el vector invocante contiene algún elemento igual a otro valor 
// pasado por parámetro con una precisión menor de 1.0e-3 en cada elemento

template<class T> void vector_t<T>::ScalarProduct(const vector_t<T>& pol) {
std::cout << "Ejercicio1_Tanda2: ";
std::cout << std::endl;
double prod_esc;
  for (int i = 0; i < get_size(); ++i){
    prod_esc += get_val(i) * pol[i];
  }
std::cout << "El producto escalar de 2 vectores es: " << prod_esc;
std::cout << std::endl;
std::cout << std::endl;
}

