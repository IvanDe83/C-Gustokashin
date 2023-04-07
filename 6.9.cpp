// Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x. Вычислите значение этого многочлена, воспользовавшись схемой Горнера


#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	
	int n;
	double x;	
	double a;
	double ans;
	int i = 0;

	cin >> n >> x >> a;

	ans = a;

	while (i < n + 1) {
		cin >> a;
		ans = ans * x + a;		
		i++;		
	}

	cout << setprecision(11) << fixed;
	cout << ans;

	return 0;
}
