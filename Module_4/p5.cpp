// Write a program to find the multiplication values and the cubic values using inline function.
#include <iostream>
using namespace std;
class A
{
public:
     float mul(float x)
    {
        return (x * x);
    }
    float cube(float x)
    {
        return (x * x * x);
    }
};
int main()
{
    A obj;
    float y;

    cout<<"Enter a value : ";
    cin >> y;
  
    cout << "Multiplication value is : " << obj.mul(y)<<endl;
    cout << "Cube value of : " << obj.cube(y);
    return 0;
}