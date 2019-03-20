#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    {
        int a[100], b[100];
        for (int i = 0; i < m; i++)
            cin >> a[i] >> b[i];
        int x = 1;
        for (int i = 0; i < m; i++)
        {
            if ((a[i] == x && b[i] == x + 1) || (a[i] == x + 1 && b[i] == x))
            {
                x++;
                if (x > n)
                    break;
                i = 0;
            }
        }
        if (x == n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}