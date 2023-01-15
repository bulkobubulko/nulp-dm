#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[20];
    int k, l;
    cout << "Write given expression:\n";
    cin >> s;
    cout << "Prefix form:\n";
    for (int i = 0; i<strlen(s); i++){
        if (s[i] == ')') cout << s[i + 1] << s[i - 2] << s[i - 3] << s[i - 1];
        if ((s[i] == '*') || (s[i] == '/')){
            if ((s[i + 2] == '-') || (s[i + 2] == '+'))
                cout << s[i + 2] << s[i] << s[i - 1] << s[i + 1]; else cout <<
s[i] << s[i - 1] << s[i + 1];
} }
    cout << "\nInfix form:\n";
    for (int i = 0; i<strlen(s); i++) cout << s[i];
    cout << "\nPostfix form:\n";
    for (int i = 0; i<strlen(s); i++){
        if (s[i] == ')') cout << s[i - 3] << s[i - 1] << s[i - 2];
        else
            if (s[i] == '+' || s[i] == '-') {
                if (s[i + 2] == '*' || s[i + 2] == '/')
                    cout << s[i + 1] << s[i + 3] << s[i + 2];
                if (s[i] == '+') k = i;
                if (s[i] == '-') l = i;
            }
        }
if (k<l) cout << s[l] << s[k];
else cout << s[k] << s[l];
getchar();
}
