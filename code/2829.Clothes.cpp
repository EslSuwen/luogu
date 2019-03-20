#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxv=1000086;
// http://codeforces.com/contest/102
// Clothes
vector<int> mat[127];
int prc[127]={0};
int minp[127]={0};

int main()
{
	memset(minp,-1,sizeof minp);
	int n,m,ans=3*maxv;	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&prc[i+1]);
		mat[i].clear();
		minp[i]=-1;
	}
	for(int i=0;i<m;i++)
	{
		//cout<<ans<<endl;
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=0;i<mat[b].size();i++)
		{
			int k=mat[b][i];
			for(int j=0;j<mat[k].size();j++)
			{
				if(mat[k][j]==a) ans=min(prc[a]+prc[b]+prc[k],ans);
			}
		}
		mat[a].push_back(b);
		mat[b].push_back(a);
	}
//		minp[a]=(minp[a]+1)?min(minp[a],prc[b]):prc[b];
//		minp[b]=(minp[b]+1)?min(minp[b],prc[a]):prc[a];
	if(ans==3*maxv) cout<<"-1";
	else cout<<ans;
	return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
    int m, n, count = 0;
    int a[5000], b[5000], p[100], sum[170000];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        x = a[i];
        y = b[i];
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            else if (y == a[j])
                z = b[j];
            else if (y == b[j])
                z = a[j];
            else
                continue;
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                    continue;
                if (a[k] == z && b[k] == x)
                {
                    sum[count] = p[x - 1] + p[y - 1] + p[z - 1];
                    count++;
                }
                else if (a[k] == x && b[k] == z)
                {
                    sum[count] = p[x - 1] + p[y - 1] + p[z - 1];
                    count++;
                }
            }
        }
        if (count == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i < count; i++)
            {
                if (sum[0] > sum[i])
                    sum[0] = sum[i];
            }
            cout << sum[0] << endl;
        }
        return 0;
    }
}*/