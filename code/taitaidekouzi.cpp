#include <iostream>
using namespace std;

int Fibonacci(int n)
{

    if (n == 1 || n == 2) // 递归结束的条件，求前两项

        return 1;

    else

        return Fibonacci(n - 1) + Fibonacci(n - 2); // 如果是求其它项，先要求出它前面两项，然后做和。
}
int main()
{
    int x[60];
    for (int i = 1; i < 60;i++)
    {
        x[i] = Fibonacci(i);
    }
    cout << x[2] << " " << x[3] << " " << x[25] << endl;
    return 0;
}