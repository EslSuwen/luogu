#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int a, b, t, x, y;
    while (cin >> a >> b)
    {
        int count = 0;
        if (a > b)
        {
            t = b;
            b = a;
            a = t;
        }
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        for (x = a; x < b; x++)
            for (y = x; y < b; y++)
            {
                int s = x * y, g = gcd(x, y);
                if (g == a && s / g == b)
                    count++;
            }
        if (count == 0)
            if (a != gcd(a, b) || b != a * b / gcd(a, b))
            {
                cout << 0 << endl;
                continue;
            }

        cout << (count + 1) * 2 << endl;
    }
    return 0;
}
