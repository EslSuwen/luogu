#include <iostream>
using namespace std;
void num(int n)
{
	int k = 1, x, y;
	x = y = 1;
	for (int i = 1;; i++)
	{
		for (int j = 0; j < i; j++, k++)
		{
			if (k == n)
			{
				if (i % 2 == 0)
				{
					x = 1 + j;
					y = i - j;
				}
				else
				{
					x = i - j;
					y = 1 + j;
				}
				cout << x << "/" << y << endl;
				return;
			}
		}
	}
}
int main()
{
	int n;
	while (cin >> n)
		num(n);
	return 0;
}
