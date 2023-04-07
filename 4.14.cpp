// Дано три числа. Упорядочите их в порядке неубывания.


# include <iostream>
using namespace std;


int main() {

	int x;
	int y;	
	int z;
	
	cin >> x >> y >> z;

	if (x > y)
		swap(x, y);
	if (y > z)
		swap(y, z);
	if (x > y)
		swap(x, y);
	if (y > z)
		swap(y, z);


	cout << x << " " << y << " " << z;	

	return 0;
}
