#include <iostream>
#include<string>
#include <cstdio>

using namespace std;

int main()
{
	int n=0;
	int x, y;
	string a[9] = { "one","two","three","four","five","six","seven","eight","nine" };
	cin >> x >>y;
	
	if (x <= 9 && y <= 9)
	{
		for (n = x; n <= y; n++)
		{
			cout << a[n - 1] << endl;
		}

	}
	else if (x <= 9 && y > 9)
	{
		for (n = x; n <= 9; n++)
		{
			cout << a[n - 1] << endl;
		}
		for (n=10;n<=y;n++)
		{
			if (n % 2 == 0)
			{
				cout <<"even"<< endl;
			}
			else
			{
				cout << "odd" << endl;
			}

		}
	}
	else
	{
		for (n = x; n <= y; n++)
		{
			if (n % 2 == 0)
			{
				cout << "even" << endl;
			}
			else
			{
				cout << "odd" << endl;
			}
			
		}

	}
		
	return 0;
}
