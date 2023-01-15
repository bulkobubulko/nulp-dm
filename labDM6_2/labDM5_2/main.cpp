#include <iostream>
using namespace std;
void TruthTable(int RESULT[])
{
    for (int i = 0; i < 8; i++)
        cout <<"  " << RESULT[i] << endl;
}
void AND(int* a, int *b, int* c)
{
    
    for (int i = 0; i < 8; i++)
        if (a[i] == 1 && b[i] == 1)
            c[i] = 1;
        else
        c[i] = 0;
}

void NOT(int* a, int* b)
{
    for (int i = 0; i < 8; i++)
        if (a[i] == 1)
            b[i] = 0;
        else
            b[i] = 1;
}

void IMPLICATION(int* a, int* b, int *c)
{
    for (int i = 0; i < 8; i++)
        if (a[i] == 1 && b[i] == 0)
            c[i] = 0;
        else
            c[i] = 1;
}

int main()
{   setlocale(LC_ALL, "ukr");
    int x[8]{ 0,0,0,0,1,1,1,1 };
    int y[8]{ 0,0,1,1,0,0,1,1 };
    int z[8]{ 0,1,0,1,0,1,0,1 };
    int a[8], b[8], c[8], d[8], e[8], f[8], g[8];
    
    AND(x, z, a);
    AND(z, x, b);
    IMPLICATION(a, b, c);
    NOT(c, d);
    AND(b, y, e);
    NOT(e, f);
    IMPLICATION(d, f, g);
  
    
    cout << " Truth table: " << endl;
    TruthTable(g);
    
    return 0;
    
}
