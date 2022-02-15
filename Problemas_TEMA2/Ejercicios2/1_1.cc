// Mostrar por pantalla todos los elementos del vector invocante 
// distintos de cero con una precisión menor de 1.0e-3


template<class T>
void
vector_t<T>::NotZero() {
const double epsilon = 1 * (pow(10, -3));
	for(int i = 0; i < get_size(); i++) {
		if(fabs(at(i)) > epsilon) {
			cout << at(i) << " ";
		}
	}
cout << endl;
}