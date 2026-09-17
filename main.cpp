#include <iostream>
using namespace std;

int main()
{
    // Завдання 1 (39)
    // Переведення швидкості з км/год у м/с

    double k, m;

    cout << "Завдання 1 (39)\n";
    cout << "Переведення швидкості з км/год у м/с.\n";
    cout << "Введіть швидкість в км/год: ";
    cin >> k;

    m = k * (1000.0 / 3600.0);

    cout << "Швидкість у м/с: " << m << endl;


    // Завдання 2 (19)
    // Покрокове обчислення A^15

    long a, a1, a2;

    cout << "\nЗавдання 2 (19)\n";
    cout << "Покрокове обчислення A^15.\n";
    cout << "Введіть A: ";
    cin >> a;

    a1 = a * a;        // A^2
    cout << "A^2 = " << a1 << endl;

    a2 = a1 * a;       // A^3
    cout << "A^3 = " << a2 << endl;

    a2 = a2 * a1;      // A^5
    cout << "A^5 = " << a2 << endl;

    a1 = a2 * a2;      // A^10
    cout << "A^10 = " << a1 << endl;

    a1 = a1 * a2;      // A^15
    cout << "A^15 = " << a1 << endl;


    // Завдання 3 (14)
    // Переміщення A => B, B => C, C => A

    int A, B, C, n;

    cout << "\nЗавдання 3 (14)\n";
    cout << "Переміщення вмісту A => B, B => C, C => A\n";
    cout << "Введіть A, B, C: ";
    cin >> A >> B >> C;

    cout << "\nПочаткові значення:\n";
    cout << "A = " << A << " B = " << B << " C = " << C << endl;

    n = A;
    A = C;
    C = B;
    B = n;

    cout << "\nНові значення:\n";
    cout << "A = " << A << " B = " << B << " C = " << C << endl;

    return 0;
}
