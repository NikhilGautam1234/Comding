#include "bits/stdc++.h"
using namespace std;

bool findelement(int *arr, int element, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (element == *((arr+i*columns)+j))
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Enter the element you want to find : ";
	int element;
	cin >> element;
	if (findelement((int *)arr, element, r, c))
	{
		cout << "element found ";
	}
	else
		cout << "not found";

	return 0;
}