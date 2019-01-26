/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2018-12-08 18:06:21
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-08 18:26:27
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int k, i = 0;
    double s = 0, a = 1;
    cin >> k;
    while (k >= s)
    {
        i++;
        s += a / i;
    }
    cout << i << endl;
    return 0;
}
