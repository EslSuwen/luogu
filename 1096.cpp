#include <iostream>
using namespace std;
int count = 0;
void hanoi(int n)
{
    if (n == 1)
        count++;
    else
    {
        hanoi(n--);
        count++;
        hanoi(n--);
    }
}
int main()
{
    int n;
    cin >> n;
    hanoi(n);
    cout << count << endl;
    return 0;
}