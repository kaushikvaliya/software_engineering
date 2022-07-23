// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include <iostream>
using namespace std;
class person
{
public:
    void displayPerson(string s, int t)
    {
        cout << "Name:  " << s << endl;
        cout << "Age:    " << t << endl;
    }
};
class student : public person
{
public:
    void print()
    {
        cout << "Student details are: \n";
    }

    void displayStudent(float percentage)
    {
        cout << "Prcentage is:  " << percentage << endl;
    }
};

class teacher : public person
{
public:
    void printt()
    {
        cout << "Teachers details are: \n";
    }
    void displayTeacher(float salary)
    {
        cout << "Salary:  " << salary << endl;
    }
};

int main()
{
    int sag;
    int tag;
    char sname[10], tname[10];
    float salary, per;
    cout << "Enter a name  a sttudent name :";
    cin >> sname;
    cout << "Enter a name  a sttudent per :";
    cin >> per;
    cout << "Enter a name  a sttudent age :";
    cin >> sag;

    cout << "Enter a name  a Teacher name :";
    cin >> tname;
    cout << "Enter a name  a sttudent age :";
    cin >> tag;
    cout << "Enter a name  a Teacher salary :";
    cin >> salary;

    student objs;
    objs.print();
    objs.displayPerson(sname, sag);
    objs.displayStudent(per);

    teacher objt;
    objt.printt();
    objt.displayPerson(tname, tag);
    objt.displayTeacher(salary);
    return 0;
}

