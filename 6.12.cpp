// Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений имеет ровно одно решение. 
// Выведите два числа x и y, являющиеся решением этой системы.


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
	double e;
	double f;
	double dd;
	double dx;
	double dy;

	cin >> a >> b >> c >> d >> e >> f;

	dd = a * d - b * c;
	dx = e * d - b * f;
	dy = a * f - c * e;

	cout << dx / dd << " " << dy / dd;
	
	return 0;
}
