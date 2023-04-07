// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.


# include <iostream>
using namespace std;


int main() {

	int n;
	int i = 2;	

	cin >> n;

	while (n % i != 0)		
		i++;
		
	cout << i;

	return 0;
}
