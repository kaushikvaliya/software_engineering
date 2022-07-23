// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate = 2.5)
#include <iostream>
using namespace std;

class interest
{
public:
    float net;
    interest(int year, int principal, float rete)
    {
        net = (principal * year * rete) / 100;
    }
    void display()
    {
        cout << "your interest : " << net;
    }
};

int main()
{

    int p, y;
    float rete = 2.5;
    cout << "Enter your Amaunt :";
    cin >> p;
    cout << "Enter year :";
    cin >> y;
    interest obj1(y, p, rete);
    obj1.display();

    return 0;
}
