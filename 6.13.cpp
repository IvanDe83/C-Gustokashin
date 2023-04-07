// Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений


# include <iostream>
# include <iomanip>
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
    
    if (a == 0 && b == 0 && e ==0) {
        a = c;
        b = d;
        e = f;
    }    

	if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0)
		cout << 5;
	else {

		dd = a * d - b * c;
		dx = e * d - b * f;
		dy = a * f - c * e;

		if (dd != 0)			
			cout << 2 << " " << dx / dd << " " << dy / dd;
		else if ((dx != 0 || dy != 0) || (a == 0 && b == 0 && c == 0 && d == 0 && (e != 0 || f != 0)))
			cout << 0;        
		else if (a != 0 && b != 0)
			cout << 1 << " " << -a / b << " " << e / b;
		else if (a != 0)
			cout << 3 << " " << e / a;
		else if (b != 0)
			cout << 4 << " " << e / b;
	}	

	return 0;
}
