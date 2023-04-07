// Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, 
// то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.


# include <iostream>
using namespace std;


int main() {
	
	int i;
	int max_el = 0;
	int second_max = 0;

	cin >> i;

	while (i != 0) {
		if (i > max_el) {
			second_max = max_el;
			max_el = i;			
		} else if (i > second_max)
			second_max = i;
		cin >> i;
	}
	
	cout << second_max;

	return 0;
}
