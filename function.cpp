#include <iostream>

using namespace std;

int func(string name, int n,string country = "India")
{
    cout << name + country << n << endl;
}

string name()
{
    string str;
    cout<<"Please enter your name : ";
    getline(cin,str);
    return str;
}
int num(int a, int b)
{
    return a+b;
}


int main()
{
    func("Tharun",1);
    func("Klaus",2,"America");

    string Enemy = name();
    cout<<"Your enemy is "<< Enemy<<endl;

    float res = num(5,13);
    cout << res << endl;

    // float a = 10;
    // cout << a <<endl;           //10 not 10.0

}