#include <iostream>
using namespace std;

int main() {
    // Введення сторін трикутника
    int a, b, c;
    cout << "Введіть сторони трикутника a, b, c: ";
    cin >> a >> b >> c;

    // Перевірка на рівносторонність
    if (a == b && b == c) {
        cout << "Трикутник є рівностороннім." << endl;
    } else {
        cout << "Трикутник не є рівностороннім." << endl;
    }

    return 0;
}
