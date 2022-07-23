// Write a program of to sort the array using templates.
#include <iostream>
using namespace std;
template <class T>
T sort(T arr[5],int)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int int_array[5];
	float float_array[5];
	cout << "Entner integer array elements:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> int_array[i];
	}
	sort(int_array,5);
	cout << "After sorting they are :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << int_array[i] << ", ";
	}
	cout << endl;
}