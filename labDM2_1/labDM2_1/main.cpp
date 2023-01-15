#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
const int u = 25;

int U[u] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };

void Copy(int* a, int* b, const int size);
void Print(int* n, const int size);
void SortDenial(int* B, const int size);
void Division(int* a, int* b, const int size);
void Union(int* a, int* b, const int size);
void Intersection(int* a, int* b, const int size);


int main()
{
    int A[u], B[u], C[u];
    int AA[u], BB[u];

    A[0] = 1;
    A[4] = 5;
    A[5] = 6;
    A[8] = 9;
    A[9] = 10;
    A[13] = 14;
    A[14] = 15;
    A[15] = 16;
    A[20] = 21;
    A[21] = 22;

    
    B[0] = 1;
    B[1] = 2;
    B[10] = 11;
    B[15] = 16;
    B[16] = 17;
    B[19] = 20;
    B[20] = 21;
    B[23] = 24;
    B[24] = 25;
    

    
    C[0] = 1;
    C[1] = 2;
    C[5] = 6;
    C[6] = 7;
    C[7] = 8;
    C[11] = 12;
    C[16] = 17;
    C[20] = 21;
    C[22] = 22;
    C[24] = 25;


    Copy(A, AA, u);
    SortDenial(AA, u);

    Copy(B, BB, u);
    SortDenial(BB, u);

    Intersection(A, BB, u);

    SortDenial(A, u);
    
    Division(A, B, u);

    Union(B, C, u);
    SortDenial(B, u);
    
    Intersection(A, B, u);
    
    Print(A, u);
  
    return 0;
}


void Copy(int* a, int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
}

void Print(int* n, const int size)
{
    cout << setw(4) << "{ ";
    for (int i = 0; i < size; i++)
        cout << n[i]<<setw(4);
    cout << " }\n\n";
}
 
void SortDenial(int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (b[i] == U[i])
            b[i] = 0;
        else
            b[i] = U[i];
    }
}

void Division(int* a, int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] == b[i]))
        {
            if (a[i] < 0)
                a[i] = 0;
        }
     else a[i] = 0;
    }
}

void Intersection(int* a, int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] == b[i]))
            a[i] = 0;
        if (a[i] == b[i])
            a[i] = b[i];
    }
}

void Union(int* a, int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] == b[i]))
            a[i] = b[i];
        if (a[i] < 0)
            a[i] = 0;
}

    
}
