// Шоколадка имеет вид прямоугольника, разделенного на N×M долек. Шоколадку можно один раз разломить по прямой на две части. 
// Определите, можно ли таким образом отломить от шоколадки ровно K долек.


# include <iostream>
using namespace std;


int main() {

	int n;
	int m;
	int k;
	
	cin >> n >> m >> k;

	if (n * m < k)
		cout << "NO";
	else
		k % n == 0 || k % m == 0 ? cout << "YES" : cout << "NO"; 		

	return 0;
}
