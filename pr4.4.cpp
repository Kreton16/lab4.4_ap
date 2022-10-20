#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, y, R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(6) << "x" << setw(6) << "|"
        << setw(6) << "y" << setw(6) << "|" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -8 - R)
            y = R;
        else
            if (-8 - R < x && x <= -8 + R)
                y = -sqrt(R * R - x * x - 16. * x - 64.) + R;
            else
                if (-8 - R < x && x <= -4)
                    y = R;
                else
                    if (-4 < x && x <= 0)
                        y = -(R * x) / 4.;
                    else
                        if (0 < x && x <= 2)
                            y = -(1. / 2.) * x;
                        else
                            y = x - 2.;
        cout << "|" << setw(6) << setprecision(2) << x
            << setw(6) << "|" << setw(6) << setprecision(3)
            << y << setw(6) << "|" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}