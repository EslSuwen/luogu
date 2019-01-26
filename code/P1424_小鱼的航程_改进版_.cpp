/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2018-12-08 18:41:47
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-08 19:00:27
 */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int x, n;
    cin >> x >> n;
    cout << (n - (int(n / 7.0 + 0.5) * 2 + ((n % 7 != 0) ? ((x - 6 >= 0) ? 1 : 0) : 0))) * 250 << endl;

    return 0;
}
