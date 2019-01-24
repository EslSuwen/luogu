/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2019-01-19 15:41:55
 * @LastEditors: Suwen \n
 * @LastEditTime: 2019-01-19 15:45:32
 */
#include <iostream>
using namespace std;
int main()
{
    int h[10],l,sum=0;
    for (int i = 0; i < 10;i++)
    {
        cin >> h[i];
    }
    cin >> l;
    l += 30;
    for (int i = 0; i < 10;i++)
    {
        if(l>=h[i])
            sum++;
    }
    cout << sum << endl;
    return 0;
}