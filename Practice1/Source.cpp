#include <iostream>
using namespace std;

int main()
{
	float value = 1;
	while (value != 0)
	{
		cout << "Please enter a value below:" << endl;
		cin >> value;
		if (value == 0)
			break;
		cout << "\nThe square of your value is " << pow(value, 2) << "\n" << endl;

	}

	system("pause");

	return 0;
}