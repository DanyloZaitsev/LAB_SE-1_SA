#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cout << "Enter size your array(more than 4, but less than 48):" << endl;
	cin >> n;
	int* arr = new int[n];
	int i;
	if (n > 4)
	{                                                       
		cout << "Your array from the Fibonacci series: ";   
		cout << "1 1 ";                                     
		arr[1] = 1;
		arr[2] = 1;
		for (i = 3; i < (n - 1); ++i)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Warning! Your array can't be so small" << endl; 
	}

	cout << endl;
	system("pause");
	return 0;
}