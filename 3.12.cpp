// Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. 
// Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.


# include <iostream>
using namespace std;


int main() {
	
	int h1;
	int m1;
	int s1;
	int h2;
	int m2;
	int s2;

	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

	cout << (h2 * 60 + m2) * 60 + s2 - (h1 * 60 + m1) * 60 - s1;

	return 0;
}
