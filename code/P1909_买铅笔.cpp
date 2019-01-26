/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2018-12-07 23:05:18
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-07 23:15:53
 */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count, sum, t,n, min = 0xFFFFFFF;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> count >> sum;
        t = sum * (n % count == 0 ? n / count : n / count + 1);
        if(min>t)
            min = t;
    }
    cout << min << endl;
    return 0;
}
