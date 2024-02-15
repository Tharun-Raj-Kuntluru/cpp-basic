#include <iostream>

using namespace std;

int gcd(int a,int b);       //Declaring the function


int main()
{
    int num1,num2;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;

    cout << "The gcd of " <<num1 <<" and " <<num2 <<" is " << gcd(num1,num2) << endl;

}

int gcd(int a, int b)           //Defining the function
{
    int c;
    while(a)
    {
        c = a;
        a = b%a;
        b = c;        
    }
    return b;

}