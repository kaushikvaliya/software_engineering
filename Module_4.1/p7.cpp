// Write a program of two concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>
using namespace std;
class addstring
{
public:
    char str1[50], str2[50];
    addstring(char ch[], char ch1[])
    {
        strcpy(str1, ch);
        strcpy(str2, ch1);
    }
    void operator+();
};
void addstring ::operator+()
{
    cout << "Add twostring : " << strcat(str1, str2);
}

int main()
{
    char s1[20], s2[20];

    cout << "Enter a frist string :";
    cin.get(s1, 20);
    fflush(stdin);
    cout << "Enter a frist string :";
    cin.get(s2, 20);
    addstring a1(s1, s2);
    +a1;

    return 0;
}