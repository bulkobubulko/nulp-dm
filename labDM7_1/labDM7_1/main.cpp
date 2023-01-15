#include <iostream>
#include <string>
 
using namespace std;

void Tree(string& s)
{
cout << "\t\t\t\t\t\t\tE\n\n";
cout << "\t\t\t\t\t\t\t|\n\n";
cout << "\t\t\t\tE\t\t\t" << s[1] << "\t\t\tE\n\n";
cout << "\t\t\t\t|\t\t\t " << "\t\t\t|\n\n";
cout << "\t\t\tE\t" << s[3] << "\tE\t\t\t\tE\t" << s[9] << "\tE\n\n";
cout << "\t\t\t|\t \t|\t\t\t\t|\t \t|\n\n";
cout << "\t\t\tV\t \tV\t\t\t "<<s[4]<<" E "<<s[8]<<"\t\tC\n\n";
cout << "\t\t\t|\t \t|\t\t\t\t|\t \t|\n\n";
cout << "\t\t\t" << s[0] << "\t \t" << s[2] << "\t\t\tE\t" << s[6] << "\tE\t" << s[10]
<< "\n\n";
    cout << "\t\t\t\t\t\t\t\t|\t\t|\n\n";
    cout << "\t\t\t\t\t\t\t\tV\t\tC\n\n";
    cout << "\t\t\t\t\t\t\t\t|\t\t|\n\n";
    cout << "\t\t\t\t\t\t\t\t"<<s[5]<<"\t\t"<<s[7]<<"\n\n\n\n\n";
}

int main() {
    string str;
    cout << "Write given expression:\n" << endl;
    getline(cin, str);
    cout << endl;
Tree(str);
    
}
