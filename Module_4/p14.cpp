// Write a program of to swap the two values using templates

#include <iostream>
using namespace std;
template <class T>
class A
{
public:
    void swapnumber( int x ,int y)
    {
        T t;
        t = x;
        x = y;
        y = t;
        cout << x << " " << y << endl;
    }
    
};
int main()
{
    int a,b;
    cout<<"Enter a first number :";
    cin >> a;
    cout<<"Enter a first number :";
    cin >> b;
    A <int>obj;
    obj.swapnumber(a, b);
    return 0;

}