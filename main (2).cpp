#include <iostream>
#include <cmath>    // Для математичних функцій
using namespace std;

int main() {
    // Введення змінної x
    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення виразу
    double y = 4 * sqrt(x) + sqrt(abs(pow(x, 3))) * log2(pow(sin(2 * abs(x)), 2)) + 2 * M_PI * abs(tan(x)) / 12;

    // Виведення результату
    cout << "y = " << y << endl;

    return 0;
}
