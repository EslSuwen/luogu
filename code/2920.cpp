#include <iostream>
using namespace std;
int main()
{
    string str1, str2, str3;
    int n;
    cin >> n;
    while (n)
    {
        cin >> str1 >> str2 >> str3;
        int nstr1 = str1.size();
        int nstr2 = str2.size();
        int nstr3 = 0;
        for (; nstr3 < str3.size(); nstr3++)
        {
            if (str3[nstr3] == str1[nstr1])
                nstr1++;
            else if (str3[nstr3] == str2[nstr2])
                nstr2++;
            else if (str3[nstr3] == str1[nstr1] && str3[nstr3] == str2[nstr2])
                break;
            else
                break;
        }
        if (nstr3 == str3.size())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}