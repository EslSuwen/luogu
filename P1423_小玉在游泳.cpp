/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2018-12-08 18:28:56
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-08 18:36:14
 */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count=0;
    double dis,s=0,step=2;
    cin >> dis;
    while(dis>s)
    {
        s += step;
        step *= 0.98;
        count++;
    }
    cout << count << endl;
    return 0;
}
