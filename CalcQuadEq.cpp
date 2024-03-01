#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //initialisation of coefficients 
    int a, b, c;

    cout << "Enter three coefficients for your equation: " << endl;
    cin >> a >> b >> c;
    cout << "Your equation is :" << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    cout << "======================================================================================" << endl;
    //finding the value of discriminant
    int discriminant;
    discriminant = (b * b) - 4 * a * c;
    cout << "Discriminant equals to: " << discriminant << endl;
    if (discriminant > 0)
    {
        double sqrDiscr;
        sqrDiscr = sqrt(discriminant);
        cout << "Square root of discriminant eq to: " << sqrDiscr << endl;
        cout << "Discriminant is bigger than 0" << endl;
        double x1, x2;
        x1 = (-b + sqrDiscr) / (2 * a);
        cout << fixed << setprecision(2) << "x1 equals to: " << x1 << endl;
        x2 = (-b - sqrDiscr) / (2 * a);
        cout << fixed << setprecision(2) << "x2 equals to: " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Discriminant equals to 0" << endl;
        double x;
        x = (-b) / (2 * a);
        cout << "x equals to: " << x;
    }
    else if (discriminant < 0)
    {
        cout << "Discriminant is less than 0!" << endl;
        cout << "There is no solution!" << endl;
    }

    return 0;
}
