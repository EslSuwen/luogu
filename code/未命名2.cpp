#include <iostream>
using namespace std;
int num(int x,int n)
{
	return x<=n?x:num(x-n,n++);
}
int main ()
{
	int x,n=1;
	while (cin>>x)
	{
		cout<<num(x,n)<<endl;
	}
	return 0;
}
