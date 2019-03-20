
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	long long a, tmp, b;
	cin >> a >> b;
	tmp = a;
	while (tmp < b)
	{
		tmp *= a;
		n++;
	}
	if (tmp == b)
		cout << "YES" << endl
			 << n;
	else
		cout << "NO";
	return 0;
}
