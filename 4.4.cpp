// Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). 
// Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;
	int c;

	cin >> a >> b >> c;

	if (a < b) {
		if (b < c)
			cout << c;
		else
			cout << b;		
	}
	else {
		if (a < c)
			cout << c;
		else
			cout << a;
	}

	return 0;
}
