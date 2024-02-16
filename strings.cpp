#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Tharun ";
    string b = "Raj ";
    string c = "Kuntluru";
    string cat = a + b + c;
    cout << cat  + " is on career development" << endl;

    cout << "The length of the string a is " + a.size() << "\n";

    char d = a[0];
    cout << d <<endl;
    a[0] = 'K';
    cout << a << endl;
    cout << a[0] <<std:: endl;

    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "\n" << name <<"\n";           //takes only 1 word
    cin.ignore();       //To remove newline characters in the previous cout buffer

    string fullname;
    cout << "Enter your full name" << endl;
    getline(cin, fullname);
    cout << fullname << endl;
}