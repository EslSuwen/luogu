#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a[1000];
    string str1, str2;
    char str[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i] >> a[i];
    }
    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        int j = 0, sum = 0;
        for (int index=i; index < str1.size(); index++)
        {
            char temp = str1[index];

            for (; j < str2.size(); j++)
            {
                if (temp == str2[j])
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (str[k] == str2[j])
                        {
                            sum += a[j];
                            break;
                        }
                    }
                    break;
                }
            }
        }
        cout << "sum=" << sum << endl;
    }
    return 0;
}