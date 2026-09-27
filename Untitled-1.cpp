#include <iostream>
#include <windows.h> // Для кодування UTF-8 у консолі

int main() {
    // Налаштування кодування UTF-8 для консолі Windows
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    // ЗАВДАННЯ 1: Обчислення A^8 за 3 множення
    
    std::cout << "=== Завдання 1: Обчислення A^8 ===" << std::endl;
    double A;
    std::cout << "Введіть число A: ";
    std::cin >> A;

    double temp;
    temp = A * A;         // 1-ше множення: A^2
    std::cout << "A^2 = " << temp << std::endl;

    temp = temp * temp;   // 2-ге множення: A^4
    std::cout << "A^4 = " << temp << std::endl;

    temp = temp * temp;   // 3-тє множення: A^8
    std::cout << "A^8 = " << temp << std::endl << std::endl;

    // ЗАВДАННЯ 2: Площа прямокутного трикутника
    std::cout << "=== Завдання 2: Площа прямокутного трикутника ===" << std::endl;
    double a, b;
    std::cout << "Введіть катет a: ";
    std::cin >> a;
    std::cout << "Введіть катет b: ";
    std::cin >> b;

    double S = (a * b) / 2.0;
    std::cout << "Площа трикутника S = " << S << std::endl << std::endl;
    // ЗАВДАННЯ 3: Дії над квадратами двох чисел
    std::cout << "=== Завдання 3: Операції над квадратами двох чисел ===" << std::endl;
    double x, y;
    std::cout << "Введіть перше ненульове число x: ";
    std::cin >> x;
    std::cout << "Введіть друге ненульове число y: ";
    std::cin >> y;

    // Обчислення квадратів чисел
    double sq1 = x * x;
    double sq2 = y * y;

    std::cout << "Квадрат першого числа (x^2) = " << sq1 << std::endl;
    std::cout << "Квадрат другого числа (y^2) = " << sq2 << std::endl;
    std::cout << "Сума квадратів = " << (sq1 + sq2) << std::endl;
    std::cout << "Різниця квадратів = " << (sq1 - sq2) << std::endl;
    std::cout << "Добуток квадратів = " << (sq1 * sq2) << std::endl;
    std::cout << "Частка квадратів = " << (sq1 / sq2) << std::endl;

    return 0;
}