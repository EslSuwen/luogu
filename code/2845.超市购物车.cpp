#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        int m = 0, cnt = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'q')
            {
                if (m == 0)
                {
                    cnt++;
                    continue;
                }
                else
                    m--;
            }
            if (str[i] == 'p')
                m++;
        }
        cout << cnt << endl;
    }
    return 0;
}