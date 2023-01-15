#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    int y;
    int z;
    bool A;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;

    cout << endl;
    cout << fixed;

    cout << "----------------------" << endl;
    cout << "|" << setw(5) << setprecision(2) << "x" << " |"
         << setw(5) << setprecision(2) << "y" << " |"
         << setw(5) << setprecision(2) << "z"  << " |"<< endl;
    cout << "----------------------" << endl;

    for (int x = 0; x <= 1; ++x)
    {
        for (int y = 0; y <= 1; ++y)
        {
            for (int z = 0; z <= 1; ++z)
            {
                A =  (x || (y || z)) || (!x || (!y || !z));

                cout << "|" << setw(5) << setprecision(2) << x << " |"
                            << setw(5) << setprecision(2) << y << " |"
                            << setw(5) << setprecision(2) << z<< " |"<< endl;

            }
        }
    }

    cout <<endl<< "A = " << A <<"\n\n";

    system("pause");

    return 0; }