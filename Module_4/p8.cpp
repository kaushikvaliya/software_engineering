// Assume a class cricketer is declared. Declare a derived class batsman from 
// cricketer .Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display 
// data. (Single Inheritance)  
#include <iostream>
using namespace std;
class cricketer
{
	public:
	void mainclass()
	{
		cout<<"This is a maine class..."<<endl;
	}

};
class batsman : public cricketer
{
	int n,sum=0;
	float avg;
	int bcode;
	int big;
	char bname[20];
	int runs[50];
	int batavg;
	
public :
	void readdata ();
	void displaydata();
	void calculate();
};
void batsman::readdata ()
{
	cout<<"Enter batsman code : ";
	cin>> bcode;
	cout<<"Enter batsman name : ";
	cin>>bname;
	cout << "How many play match :";
	cin >> n;
	cout << "Enter a run;";
	for (int i = 0; i < n; i++)
	{
		cin >> runs[i];
		sum+=runs[i];
	}

	avg = sum/n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if( runs[i]> runs[j])
			{
				big= runs[i];
			}
			else
			{
				big= runs[j];
			}
		}
	}
}

void batsman::displaydata()
{
	cout<<endl<<"----------Batsman Detalis.----------"<<endl;
	cout<<"Batsman code : "<<bcode<<endl;
	cout<<"Batsman name : "<<bname<<endl;
	cout << "play match number : "<<n << endl;
	cout<<"Total Runs : "<<sum<<endl;
	cout<<"Average : "<<avg<<endl;
	cout<<"best run : "<<big<<endl;
}
int main()
{
	batsman obj1;
	obj1.mainclass();
	batsman obj;
	obj.readdata();
	obj.displaydata();
	return 0;
}