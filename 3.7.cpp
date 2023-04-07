// Дано целое трехзначное число. Найдите сумму его цифр.



# include <iostream>
using namespace std;

int main() {
	
	int n;
	int dig_sum = 0;

	cin >> n;	

	while (n != 0) {
		dig_sum += n % 10;
		n /= 10;
	} 

	cout << dig_sum << endl;
	
	return 0;
}
