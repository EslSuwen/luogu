#include <cstdio>
#include <iostream>

using namespace std;

const int maxn = 52;

long long dp[maxn];

void prepare()
{
    dp[1] = 1;
    dp[2] = 2;

    int i;
    for (i = 3; i < maxn; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}
int main()
{
    prepare();
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", dp[n]);
    }
    return 0;
}
