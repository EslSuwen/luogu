#include<iostream>
using namespace std;
int main()
{
	int m,a,i;
	while(cin>>m)
	{
		a=m-2;
		for(i=2;i<a;i++)
		{
			m=a%i;
			if(m==0)break;
		}
		if(a==i)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
