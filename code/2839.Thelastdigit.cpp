#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b)
    {
        c = a;
        for (int i = 1; i < b; i++)
        {
            c = (c * a) % 10;
        }
        cout << c << endl;
    }
    return 0;
}