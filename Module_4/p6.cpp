// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class Matrix
{
    int a[2][2];
public:
    void accept();
    void display();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    cout << "\n Enter Matrix Element (2 X 2) : \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " ";
            cin >> a[i][j];
        }
    }
}
void Matrix::display()
{
    for (int i = 0; i < 2; i++)
    {
        cout << " ";
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat[i][j] = a[i][j] + x.a[i][j];
        }
    }
    cout << "\n Addition of Matrix : \n\n";
    for (int i = 0; i < 2; i++)
    {
        cout << " ";
        for (int j = 0; j < 2; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    Matrix m, n;
    m.accept(); 
    n.accept(); 
    cout << "\n First Matrix : \n";
    m.display(); 
    cout << "\n Second Matrix : \n";
    n.display(); 
    m + n;       
    return 0;
}