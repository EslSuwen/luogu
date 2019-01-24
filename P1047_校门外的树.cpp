/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2019-01-19 16:04:00
 * @LastEditors: Suwen \n
 * @LastEditTime: 2019-01-19 16:51:25
 */
#include <iostream>
using namespace std;
int main()
{
    int l, m, t[10000], s, e, sum = 0;
    cin >> l >> m;
    l+=2;
    for (int i = 1; i < l; i++)
    {
        t[i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s >> e;
        s++;
        e++;
        for (; e >= s; e--)
        {
            t[e] = 0;
        }
    }
    for (int i = 1; i < l; i++)
    {
        if (t[i] == 1)
            sum++;
    }
    cout << sum << endl;
    return 0;
}