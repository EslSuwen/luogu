
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <set>
#include <string>
using namespace std;

char s[100100];

int main()
{
	int cnt, i, res;
	scanf("%s", s);
	cnt = 0;
	while (s[1])
	{
		cnt++;
		res = 0;
		for (i = 0; s[i]; i++)
		{
			res += s[i] - '0';
		}
		sprintf(s, "%d", res);
	}
	printf("%d\n", cnt);
	return 0;
}
