#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    while (1)
    {
        if (n == 0)
            break;
        int a[100], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            a[i + 1] = gcd(a[i], a[i + 1]);
        }
        cout << sum / gcd(a[0], a[n - 1]) << endl;
        cin >> n;
    }
    return 0;
}