#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);

    float a, b;
    int n;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    if (a > b) 
    {
        cout << "\nВведены некорректные данные. a должно быть меньше или равно b.\n";
        return 0;
    }

    if (a == b) 
    {
        float F = sin(a) * cos(a);
        float G = (a - 1) * (a - 1) * (a - 1);

        cout << fixed << setprecision(4);
        cout << "\nОдна точка (x = " << a << "):\n";
        cout << "F = " << F << "\n";
        cout << "G = " << G << "\n";
        return 0;
    }

    cout << "Введите n: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "\nВведены некорректные данные. n должно быть больше нуля.\n";
        return 0;
    }

    float h = (b - a) / n;
    cout << "\nШаг h = " << h << "\n";

    cout << fixed << setprecision(4);

    cout << "------------------------------------------------------\n";
    cout << "|   i   |     x_i     |    F(x_i)   |    G(x_i)   |\n";
    cout << "------------------------------------------------------\n";

    int i = 0;
    double x = a + i * h;

    while (x <= b + h/2) 
    {
        double F = sin(x) * cos(x);
        double G = (x - 1) * (x - 1) * (x - 1);

        cout << "| " << setw(5)  << i << " "
             << "| " << setw(11) << x << " "
             << "| " << setw(11) << F << " "
             << "| " << setw(11) << G << " |\n";

        
 
            x += h;
    }

    cout << "------------------------------------------------------\n";

    system("pause");

    return 0;
} 