#include <iostream>
using namespace std;

int main() {
    // Введення кількості секунд
    int N;
    cout << "Введіть кількість секунд: ";

    // Перевірка правильності введення
    if (!(cin >> N)) {
        cout << "Помилка: введено не ціле число." << endl;
        return 1;
    }

    // Кількість секунд в одній годині
    int seconds_per_hour = 3600;

    // Обчислюємо кількість повних годин
    int hours = N / seconds_per_hour;

    // Виведення результату
    cout << "Кількість повних годин, що минули з початку доби: " << hours << endl;

    return 0;
}
