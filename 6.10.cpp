// Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.


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

	d = b * b - 4 * a * c;
	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);

	if (d == 0)
		cout << -b / (2 * a);
	else if (d > 0)
		x1 < x2 ? cout << x1 << " " << x2 : cout << x2 << " " << x1;
	
	return 0;
}
