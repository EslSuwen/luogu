/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2019-01-19 16:55:42
 * @LastEditors: Suwen \n
 * @LastEditTime: 2019-01-19 17:02:09
 */
#include <iostream>
using namespace std;
int main()
{
    int array[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> array[i];
        if (array[i] == 0)
        {
            for (int j = i-1; j >= 0; j--)
            {
                cout << array[j] << " ";
            }
            break;
        }
    }
    cout << endl;
    return 0;
}