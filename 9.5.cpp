// Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y) заштрихованному квадрату (включая его границу). 
// Если точка принадлежит квадрату, выведите слово YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.
// Решение должно содержать функцию IsPointInSquare(x, y), возвращающую True, если точка принадлежит квадрату и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости от возвращенного значения вывести 
// на экран необходимое сообщение.
// Функция IsPointInSquare не должна содержать инструкцию if.


#include <iostream>
#include <cmath>
using namespace std;


bool IsPointInSquare(double x, double y) {
    return abs(x) + abs(y) <= 1;
}


int main() {
  
    double x;
    double y;
    
    cin >> x >> y;
    
    IsPointInSquare(x, y) ? cout << "YES" : cout << "NO";
    
    return 0;
}
