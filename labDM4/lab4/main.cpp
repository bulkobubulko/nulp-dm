#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m[15] = { 1, 1, 1, 1, 1, 2, 2, 2 ,2 ,3 ,3 ,3 ,2 ,2 ,5 };
    int n[15] = { 2, 3, 4 ,5 ,6 ,3 ,4 ,5 ,6 ,4 ,5 ,6 ,5 ,6 ,6 };
    
    int Rmn[15];
    
    int contiguity[6][6];
    
    int k = 0, z = -1;
    
    cout << "Input values:" << endl;
    
    for (int i = 0; i <= 14; i++)
    {
        cin >> Rmn[i];
    }
    for (int i = 0; i <= 5; i++)
    {
        z += 1;
        for (int j = z; j <= 5; j++)
        {
            if (i == j)
            {
                contiguity[i][j] = 0;

            }
            else
            {
                contiguity[i][j] = Rmn[k];
                contiguity[j][i] = Rmn[k++];
                
            }
        }
        
    }
    
    cout << endl << "Matrix of contiguity" << endl;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << contiguity[i][j] << " ";
            if (j == 5)
                cout << endl;
        }
    
    }
    
}

