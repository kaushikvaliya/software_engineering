// Write a program to swap the two numbers using friend function
#include <iostream>
using namespace std;
class temp
{
    int x, y, q;

public:
    void input()
    {
        cout << "Enter value of X  :";
        cin >> x;
        cout << "Enter value of Y  :";
        cin >> y;
    }
    friend void swap(temp &t);
    void display()
    {
        cout << "After Swap x is :" << x << endl;
        cout << "After Swap y is :" << y;
    }
};
void swap(temp &t)
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main()
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}