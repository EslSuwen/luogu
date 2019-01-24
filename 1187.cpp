#include <iostream>
using namespace std;
int getint()
{
    int w = 0;
    char c = getchar();
    while (c < '0' || c > '9')
        c = getchar();
    w = c - '0';
    return w;
}
int main()
{
    int N, M;
    while (cin >> N >> M)
    {
        int sum = 0;
        int(*s)[1002] = new int[1002][1002]();
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= M; j++)
                s[i][j] = getint();
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= M; j++)
            {
                if (s[i][j] == 0)
                    continue;
                int n = 6 * s[i][j] - (2 * (s[i][j] - 1));
                if (s[i][j] <= s[i - 1][j])
                    n--;
                if (s[i][j] <= s[i + 1][j])
                    n--;
                if (s[i][j] <= s[i][j - 1])
                    n--;
                if (s[i][j] <= s[i][j + 1])
                    n--;
                sum += n;
            }
        for (int k = 2; k < 10; k++)
            for (int i = 1; i <= N; i++)
                for (int j = 1; j <= M; j++)
                {
                    if (s[i][j] < k)
                        continue;
                    if (s[i][j] - s[i - 1][j] <= 1)
                        sum--;
                    if (s[i][j] - s[i + 1][j] <= 1)
                        sum--;
                    if (s[i][j] - s[i][j - 1] <= 1)
                        sum--;
                    if (s[i][j] - s[i][j + 1] <= 1)
                        sum--;
                }
        cout << sum << endl;
    }

    return 0;
}