#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        double x, y, c, s = -0x7777777;
        for (int i = 1; i <= n; i++)
        {
            cin >> x >> y;
            x = sqrt(x * x + y * y);
            if (x > s)
            {
                s = x;
                c = i;
            }
        }
        cout << c << endl;
    }
    return 0;
}