#include <iostream>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main()
{
        int a[3] = { 1, 3, 4 }, b[2] = { 2, 4 };
        cout << "AxB={";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
               cout << '(' << a[i] << ',' << b[j] << ");";
        }
        cout << '}'<<endl<<"A^2={";
    
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                 cout << '(' << a[i] << ',' << a[j] << ");";
        }
        cout << '}' << endl;
        getchar();
        return 0;
}
