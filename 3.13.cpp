// Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. 
// На какой отметке он остановится через T часов?


# include <iostream>
using namespace std;


int main() {
	
	int v;
	int t;	

	cin >> v >> t;

	cout << (v * t % 109 + 109) % 109;

	return 0;
}
