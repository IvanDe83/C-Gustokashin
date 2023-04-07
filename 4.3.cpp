// Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.


# include <iostream>
using namespace std;


int main() {

	int a;
	int b;

	cin >> a >> b;

	if (a < b)
		cout << 2;		
	else if (a == b)
		cout << 0;
	else
		cout << 1;	

	return 0;
}
