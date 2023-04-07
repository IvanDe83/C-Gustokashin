// Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, 
// равны ее наибольшему элементу.


# include <iostream>
using namespace std;


int main() {
	
	int i;
	int max_el = 0;
	int cnt = 0;

	cin >> i;

	while (i != 0) {
		if (i > max_el) {
			max_el = i;
			cnt = 1;
		} else if (i == max_el)
			cnt++;		

		cin >> i;
	}
	
	cout << cnt;

	return 0;
}
