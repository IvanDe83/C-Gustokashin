// Дана последовательность натуральных чисел x1, x2, ..., xn. 
// Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

	int cur;
	int i = 0;
	double sum_ = 0;
	double sum_sq = 0;

	cin >> cur;

	while (cur != 0) {
		sum_ += cur;
		sum_sq += cur * cur;
		i++;
		cin >> cur;
	}

	cout << setprecision(11) << fixed;
	cout << sqrt((sum_sq - sum_ * sum_ / i) / (i - 1));

	return 0;
}
