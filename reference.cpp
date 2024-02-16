#include <iostream>
using namespace std;
int main()
{
    string food = "Pizza";
    string &meal = food;
    cout << food << endl;
    cout << meal << endl;
    int a = 20;
    int &aref = a;
    cout << a << endl;
    aref = 40;
    cout << a << endl;
    a = 60;
    cout << aref << endl;
}