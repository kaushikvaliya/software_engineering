// Create a class account that stores customer name, account number and
// type of account. From this derive classes curr_acc and sav_acct to make
// them more specific to their requirements Include necessary member
// functions in order to achieve the following tasks
// a) Accepts deposit from a customer and update balance.
// b) Display the balance.
// c) Compute and deposit interest.
// d) Permit withdraws and updates the balance.
// e) Check for the minimum balance, impose penalty, necessary and update the balance.

#include <iostream>
using namespace std;
class account
{
public:
    char bank_name[20];
    char bank_branch[20];
    char acc_holder_name[20];
    int acc_number;
    char acc_holder_address[100];
    int acc_type;
    void input()
    {
        cout << "Enter the bank name                : ";
        cin >> bank_name;
        cout << "Enter the bank branch              : ";
        cin >> bank_branch;
        cout << "Enter the account holder name      : ";
        cin >> acc_holder_name;
        cout << "Enter the account number(1 to 10)  : ";
        cin >> acc_number;
        cout << "Enter the account holder address   : ";
        cin >> acc_holder_address;
    }

    void display(int n)
    {
        acc_type = n;
        cout << "Bank name              : " << bank_name << endl;
        cout << "Bank branch            : " << bank_branch << endl;
        cout << "Account holder name    : " << acc_holder_name << endl;
        cout << "Account holder address : " << acc_holder_address << endl;
        cout << "Account Number         : " << acc_number << endl;
        if (acc_type == 1)
        {
            cout << "Account Type           : CURRENT"<<endl;
        }
        else
        {
            cout << "Account Type           : SAVING"<<endl;
        }
    }
};
class curr_acc : public account
{
public:
    float balance=0.00;
    void deposit()
    {
        int num;
        cout << "Enter money you want to deposit : ";
        cin >> num;
        balance = balance + num;
    }
    void withdraws()
    {
        int no;
        cout << "Enter money you want to withdraw from account : ";
        cin >> no;
        if (no > balance)
            cout << "Your withdrawal more than Account Balance."<< endl;
        else
        {
            balance = balance - no;
            cout << "Withdrawal is Passed" << endl;
        }
    }
    void Cdisplay()
    {
        cout << "\nTotal  Balance       :Rs." << balance;
    }
};

class sav_acct : public account
{
public:
    float balance=0.00;
    int n = 0;
    void Sdeposit()
    {
        int no;
        cout << "Enter money you want to deposit : ";
        cin >> no;
        n = no * 3 / 100;
        balance = balance + no + n;
        cout << "Compute and deposit interest." << n << endl;
        cout << "Amount is Added Your Balance." << endl;
    }
    void Swithdrawal()
    {
        int no;
        cout << "Enter money you want to withdraw from account : ";
        cin >> no;
        if (no > balance)
            cout << "Your withdrawal more than Account Balance." << endl;
        else
        {
            balance = balance - no;
            cout << "Withdrawal is Passed"<<endl;
        }
    }
    void Sdisplay()
    {
        cout << "Interest of Amount     : " << n << " Rs."<< endl;
        cout << "Available balance      : " << balance <<endl;
    }
};

int main()
{
    int number;
    char ch;
    char ck[50] = "kaushik valiya";

    account cu;
    curr_acc obj1;
    sav_acct obj2;

    cout<<endl<<"          Welcome to Bank Application      " <<endl;
    cout<<endl<<"This demo program is brought you by " << ck <<endl <<endl;
    cu.input();
    cout << "C => CURRENT ACCOUNT." << endl;
    cout << "S => SAVINGS ACCOUNT." << endl;
    cout << "Enter the Account Type:";
    cin >> ch;

    cout << endl << "======= Account has been created successfully. ======" <<endl <<endl;

    while (1)
    {
        cout << "1 => Cash Deposit."<<endl;
        cout << "2 => Cash withdrawl."<<endl;
        cout << "3 => My Account information."<<endl;
        cout << "4 => Log out."<<endl;
        cout << "5 => Clear the screen and display available." << endl ;
        cout << "Please enter any options :";
        cin >> number;

        if (ch == 'c' || ch == 'C')
        {
            switch (number)
            {
            case 1:
                obj1.deposit();
                break;
            case 2:
                obj1.withdraws();
                break;
            case 3:
                cu.display(1);
                obj1.Cdisplay();
                break;
            case 4:
                cout << "Thank you for visit this application."  <<endl;
                return 0;
                break;
            case 5:
                system("cls");
                break;   
            default:
                cout << "Invalid enter the number,TRY AGAIN.";
                break;
            }
        }

        if (ch == 's' || ch == 'S')
        {
            switch (number)
            {
            case 1:
                obj2.Sdeposit();
                break;
            case 2:
                obj2.Swithdrawal();
                break;
            case 3:
                cu.display(0);
                obj2.Sdisplay();
                break;
            case 4:
                cout << "Thank you for visit this application."<<endl;
                return 0;
                break;
            case 5:
                system("cls");
                break;
            default:
                cout << "Invalid enter the number,TRY AGAIN.";
                break;
            }
        }
    }
}
