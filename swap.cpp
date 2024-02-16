#include <iostream>
using namespace std;
// 1) By using reference
void swap(int &x, int &y);
int main()
{
    int a = 10, b = 20;
    cout << "BEfore swaping " << a << b <<endl;
    swap(a,b);
    cout << "After swapping " << a << b <<endl;
}
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// 2) By using pointers
// void swap(int* x,int* y);
// int main()
// {
//     int a = 1,b = 2;
//     cout << "Before swapping : " << a << b << endl;
//     swap(&a,&b);
//     cout << "After swapping : " << a << b << endl;
// }
// void swap(int* x,int* y)
// {
//     int z = *x;
//     *x = *y;
//     *y = z;
// }
