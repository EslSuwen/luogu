/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2019-01-26 15:57:25
 * @LastEditors: Suwen \n
 * @LastEditTime: 2019-01-26 16:13:37
 */
#include <iostream>
using namespace std;
int main()
{
    int n, array[100];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> array[i];
    }
    for (int i = n - 1; i >= 0;i--)
    {
        int sum = 0;
        for (int j = 0; j < i;j++)
        {
            if(array[i]>array[j])
                sum++;
        }
        array[i] = sum;
    }
    for (int i = 0; i < n;i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}