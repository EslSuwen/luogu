#include <iostream>
using namespace std;
int main()
{
    double n;
    cin >> n;
    while (1)
    {
        if (n == 0)
            break;
        n=(120 - n) * 10 / 6;
        cout<<(n>(int)n?(int)n+1:(int)n)<<endl;
        cin >> n;
    }
    return 0;
}