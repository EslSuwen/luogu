#include <iostream>
using namespace std;
int Sum(int sum)
{
    int temp = 0;
    while (sum > 10)
    {
        temp += sum % 10;
        sum /= 10;
    }
    temp += sum;
    return temp > 10 ? (Sum(temp)) : temp;
}
int main()
{
    string str;
    getline(cin, str);
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum += str[i] - '0';
    }
    cout << Sum(sum) << endl;
    return 0;
}