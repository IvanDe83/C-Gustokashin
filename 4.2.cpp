// Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;

	cin >> a >> b;
	a < b ? cout << b : cout << a;

	return 0;
}
