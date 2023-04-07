// Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

	cout << setprecision(11) << fixed;
	
	double a;
	double b;	
	double c;
	double d;
	double x1;
	double x2;

	cin >> a >> b >> c;

	if (a != 0) {

		d = b * b - 4 * a * c;		

		if (d == 0)
			cout << 1 << " " << -b / (2 * a);
		else if (d > 0) {
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			x1 < x2 ? cout << 2 << " " << x1 << " " << x2 : cout << 2 << " " << x2 << " " << x1;
		} else
			cout << 0;
	} else {
		if (b != 0)
			cout << 1 << " " << -c / b;
		else
			if (c == 0)
				cout << 3;
			else
				cout << 0;
	}
	
	return 0;
}
