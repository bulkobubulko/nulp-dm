#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Matrix(int R[5][2], int M[4][4])
{
    for (int i = 0; i < 5; i++)
           {
                  M[R[i][0]-1][R[i][1]-1] = 1;
    }
    
    for (int i = 0; i < 4; i++)
           for (int j = 0; j < 4; j++)
                  if (M[i][j] != 1)
                        M[i][j] = 0;
}
void Print(int M[4][4])
{
       for (int i = 0; i < 4; i++)
       {
           for (int j = 0; j < 4; j++)
               cout << M[i][j] << " ";
           cout << endl;
       }
    
}

int main(){
    
    int R[5][2]{ {1,1},{2,2},{3,2},{3,3},{4,4} };
    int M[4][4];
    
    Matrix(R, M);
           cout << "Matrix: \n\n";
           Print(M);
    return 0;
}
