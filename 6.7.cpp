// Определите среднее значение всех элементов последовательности, завершающейся числом 0.


#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	int cur;
	int i = 0;
	int sum_ = 0;

	cin >> cur;

	while (cur != 0) {
		sum_ += cur;
		i++;
		cin >> cur;
	}

	cout << setprecision(11) << fixed;
	cout << (double) sum_ / i;

	return 0;
}
