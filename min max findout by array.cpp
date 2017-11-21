#include <iostream>
#include<string>
#include <cstdio>

using namespace std;

int main()
{
	/*---------------max & min find out --------*/
	int i;
	int arr[10];
	
	for (i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}
	for (i = 1; i < 5; ++i)
	{
		if (arr[0] < arr[i])//for max
		{
			arr[0] = arr[i];
		}	
	}
	cout << "max " << arr[0] << endl;

	for (i = 1; i < 5; ++i)
	{
		if (arr[0] > arr[i])//for min
		{
			arr[0] = arr[i];
		}
	}
	cout << "min " << arr[0] << endl;

		
	return 0;
}
