// Define a class to represent a bank account. Include the following members:
// Data Member: -
// a) Name of the depositor -
// b) Account Number
// c) Type of Account -
// d) Balance amount in the account -
// e) Member Functions -
// f) To assign values -
// g) To deposited an amount -
// h) To withdraw an amount after checking balance -
// i) To display name and balance
#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int acno;
    char AcHolderName[100], AcType[100];
    float bal;

public:
    A(int acc_no, char *name, char *acc_type, float Balance)
    {
        acno = acc_no;
        strcpy(AcHolderName, name);
        strcpy(AcType, acc_type);
        bal = Balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void A::deposit()
{
    int DepositAmmount1;
    cout << "Enter Deposit Amount = ";
    cin >> DepositAmmount1;
    bal += DepositAmmount1;
}
void A::withdraw()
{
    int WithdrawAmmount1;
    cout << "Enter Withdraw Amount = " << endl;
    cin >> WithdrawAmmount1;
    if (WithdrawAmmount1 > bal)
        cout << "Cannot Withdraw Amount" << endl;
    bal -= WithdrawAmmount1;
}
void A::display()
{

    cout << "Accout No. : " << acno << endl;
    cout << "Accout Holder Name : " << AcHolderName << endl;
    cout << "Account Type : " << AcType << endl;
    cout << "Balance : " << bal;
}
int main()
{
    int acno;
    char name[20], actype[20];
    float Balance;
    cout << "------------Enter Details----------------: " << endl;
    cout << "Accout No. : ";
    cin >> acno;
    cout << "Name : ";
    cin >> name;
    cout << "Account Type : ";
    cin >> actype;
    cout << "Balance : ";
    cin >> Balance;
    A b1(acno, name, actype, Balance);
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}