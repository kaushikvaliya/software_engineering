// Create an example of use delete and new operator.
#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    void getAge()
    {
        cout << "Enter age : ";
        cin >> age;
        cout << "Age = " << age << endl;
    }
};
int main()
{
    Student *ptr  = new Student();
    ptr->getAge();
    delete ptr;
    return 0;
}
