#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    string b = "Tharun";
    char c = 'A';
    int *pa = &a;
    string *pb = &b;
    char *pc = &c;
    cout << pa << endl;
    cout << pb << endl;
    cout << pc << endl;
    // cout << sizeof(pa) << sizeof(pc) << endl;            //The size of any pointer is 4 Bytes irrespective of the data type
    *pa = 20;
    cout << *pa << endl;
    cout << a << endl;


}