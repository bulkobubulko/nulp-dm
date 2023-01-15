#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main()
{
    char a[20];
    int n, c, b;
    cout << "Write given expression:\n";
    cin >> a;
    n = strlen(a);
    for (int i = 0; i<n; i++){

        if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){ if (a[i] == '+'){
            b = a[i - 2] - '0';
            c = a[i - 1] - '0';
            if (b + c >= 10){
                a[i - 2] = (b + c) / 10 + '0';
                a[i - 1] = (b + c) % 10 + '0';
                for (int j = i; j<n; j++) {
                    a[j] = a[j + 2];
                }
            }
            else
            {
                a[i - 2] = b + c + '0';
                for (int j = i - 1; j<n; j++) {
                    a[j] = a[j + 2];
                }
            }
        }
            if (a[i] == '-'){
                b = a[i - 2] - '0';
                c = a[i - 1] - '0';
                a[i - 2] = b - c + '0';
                for (int j = i - 1; j<n; j++) {
                    a[j] = a[j + 2];
                }
            }
            if (a[i] == '*'){
                b = a[i - 2] - '0';
                c = a[i - 1] - '0';
                if (b*c >= 10){
                    a[i - 2] = b*c / 10 + '0';
                    a[i - 1] = b*c % 10 + '0';
                    for (int j = i; j<n; j++) {
                        a[j] = a[j + 2];
                    }
                }
                else
                {
                    a[i - 2] = b*c + '0';
                    for (int j = i - 1; j<n; j++) {
                        a[j] = a[j + 2];
                    }
                }
            }
            if (a[i] == '/'){
                b = a[i - 2] - '0';
                c = a[i - 1] - '0';
                a[i - 2] = b / c + '0';
                for (int j = i - 1; j<n; j++) {
                    a[j] = a[j + 2];
                }
            }
            n = n - 2;
            i = -1;
        }
    }
    for (int i = 0; i<strlen(a) - 1; i++)
        cout << a[i] << "\n";
    getchar();
}
