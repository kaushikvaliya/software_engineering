// Assume that a bank maintains two kinds of accounts for customer, one called
// as saving account and other as current accounts provides Simple interest and
// withdraw facilities but no Cheque book facility.
// a) The current account provides Cheque book facility but no interest.
// b) Current account holders should maintain a minimum balance and if the
// balance falls below this level a service charges is imposed

#include <iostream>
using namespace std;
class bank
{
public:
    void same()
    {
        cout << "Name." << endl;
        cout << "Account number." << endl;
        cout << "Pan card." << endl;
        cout << "Aadhaar card." << endl;
        cout << "ATM charges." << endl;
        cout << "Credit card charges." << endl;
        cout << "Internet benking." << endl;
        cout << "joint account feselity." << endl;
    }
};
class SAVING : public bank
{
private:
public:
    void saving()
    {
        cout << "Eanrn Interste " << endl;
        cout << "Limited trajecshun of number :" << endl;
        cout << "Requirwd min balance " << endl;
        cout << "use for : salayy " << endl;
        cout << "Suitable for : Individuals" << endl;
    }
};

class CURRENT : public bank
{
public:
    void current()
    {
        cout << "Eanrn Interste " << endl;
        cout << "Limited trajecshun of number : Unlinited" << endl;
        cout << "Requirwd min balance : " << endl;
        cout << "use for : paing bills and business trajecshn" << endl;
        cout << "Suitable for  : business peopele " << endl;
        cout << "checbook : yes";
    }
};

int main()
{
    int n;
    printf("kjhgfdsa");
    cout << "Saving accounts press 1 " << endl;
    cout << "Current accounts press 2 " << endl;
    cout << "Check a facility accounts... : ";
    cin >> n;

    CURRENT c1;
    SAVING s1;
    if (n == 1)
    {
        s1.same();
        s1.saving();
    }
    else if (n == 2)
    {
        c1.same();
        c1.current();
    }
    else
    {
        cout << "please Enter only (1&2)." << endl;
    }

    return 0;
}