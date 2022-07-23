// Define a class to represent lecture details. Include the following members and
// the program should handle at least details of 5 lecturer.
// Data members:
// a) Name of the lecturer
// b) Name of the subject
// c) Name of course
// d) Number of lecturers
// Data functions:
// a) To assign initial values
// b) To add a lecture details
// c) To display name and lecture details

#include <iostream>
using namespace std;
class A
{
public:
    int num;
    char lecturer[20], subject[20], course[20];

    void input()
    {
        cout << "Enter name of the lecturer : ";
        cin.get(lecturer, 20);
        fflush(stdin);
        cout << "Enter name of the subject : ";
        cin.get(subject, 20);
        fflush(stdin);
        cout << "Enter name of course  : ";
        cin.get(course, 20);
        fflush(stdin);
        cout << "Enter number of lecturers  : ";
        cin >> num;
        fflush(stdin);
    }

    void display()
    {
        cout << "Name of the lecturer : " << lecturer << endl;
        cout << "Name of the subject : " << subject << endl;
        cout << "Name of course : " << course << endl;
        cout << "Number of lecturers : " << num << endl;
    }
};

int main()
{
    A obj[2];

    cout << "===============Enter details of 5 lecturer.==================" << endl ;
    for (int i = 0; i < 2; i++)
    {
        cout << endl << "===============Enter Lecturer [" << i + 1 << "] details.===================" << endl << endl;
        obj[i].input();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Lecturer [" << i + 1 << "] details " << endl << endl;
        obj[i].display();
    }

    return 0;
}