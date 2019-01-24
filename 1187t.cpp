#include<iostream>
using namespace std;
int a[1001][1001];
char ch;
int s,c,h,n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>ch;
            a[i][j]=ch-'0';
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]>0) s+=1;
        }
    for(int j=1;j<=m;j++)
    {
        c+=a[1][j];
        for(int i=2;i<=n;i++)
        {
            if(a[i][j]>a[i-1][j])
                c+=(a[i][j]-a[i-1][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        c+=a[i][1];
        for(int j=2;j<=m;j++)
        {
            if(a[i][j]>a[i][j-1])
                h+=(a[i][j]-a[i][j-1]);
        }
    }
    cout<<(s+c+h)*2;
    return 0;
}