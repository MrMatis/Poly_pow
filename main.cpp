#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double P1, P2, P;
    double x = 0;
    double deg_x = 0;
    double a1 = 89.42, b1 = 543.76, c1 = 32.76;
    double a2 = 8343242, b2 = 87656506, c2 = 347676576;

    cout << "Автор: Фетисов Максим Эрнестович\n" << "Группа: 3335\n" << "Формулировка задания: найти значение произведения P1*P2, где\n" << "P1 = -89.42x^8 - 543.76x^2 + 32.76x\n"
        << "P2 = -8343242x^4 + 87656506x^3 + 347676576\n" << "Дата начала: 12.01.2024\n" << "Дата окончания: 15.01.2024\n" << "Версия: 1.0.10\n\n"
        << "_________________________________________________________________"
        << "\n\nВывод этой части программы реализован при помощи библиотек iostream и iomanip\n"
        << "\nДля P1 введите значение x, с учетом, что x принадлежит [-10^10 ; 10^10], x > 10^(-100) и x != 0" << endl;

    cin >> x;
    cout << "\nДля x = " << setiosflags(ios::fixed) << setprecision(1) << x << endl;
    deg_x = x * x * x * x * x * x;
    cout << "x^6 = " << deg_x << setprecision(3) << endl;
    P1 = -a1 * deg_x - b1;
    cout << "P1.1 = " << setw(20) << P1 << endl;
    P1 = P1 * x - c1;
    cout << "P1.2 = " << setw(20) << P1 << endl;
    P1 = P1 * x;
    cout << "P1.3 = " << setw(20) << P1
        << "\nP1 = " << setw(20) << setprecision(3) << P1 << endl;
    deg_x = x * x * x;
    cout << "\nx^3 = " << deg_x << setprecision(3) << endl;
    P2 = -a2 * x + b2;
    cout << "P2.1 = " << setw(20) << P2 << endl;
    P2 = P2 * deg_x + c2;
    cout << "P2.2 = " << setw(20) << P2
        << "\nP2 = " << setw(20) << P2 << endl;
    P = P1 * P2;
    cout << "\nПроизведение P1*P2 = " << P << "\n" << endl;

    printf("%s\n\n%s\n\n%s", "_________________________________________________________________",
        "Вывод этой части программы реализован при помощи библиотеки stdio",
        "Для P1 введите значение x, с учетом, что x принадлежит [-10^10 ; 10^10], x > 10^(-100) и x != 0\n");
    scanf_s("%le", &x);

    printf("\n%s%15.3e", "Для x = ", x);
    deg_x = x * x * x * x * x * x;
    printf("\n%s%15.3e", "x^6 = ", deg_x);
    P1 = -a1 * deg_x - b1;
    printf("\n%s%15.3e", "P1.1 = ", P1);
    P1 = P1 * x - c1;
    printf("\n%s%15.3e", "P1.2 = ", P1);
    P1 = P1 * x;
    printf("\n%s%15.3e%s", "P1.3 = ", P1, "\n");
    printf("%s%15.3e", "P1 = ", P1);
    deg_x = x * x * x;
    printf("\n\n%s%15.3e", "x^3 = ", deg_x);
    P2 = -a2 * x + b2;
    printf("\n%s%15.3e", "P2.1 = ", P2);
    P2 = P2 * deg_x + c2;
    printf("\n%s%15.3e\n%s%15.3e", "P2.2 = ", P2, "P2 = ", P2);
    P = P1 * P2;
    printf("\n\n%s%15.5e\n", "Произведение P1*P2 = ", P);
    return 0;
}
