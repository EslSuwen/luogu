/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen \n
 * @Date: 2019-01-26 16:20:14
 * @LastEditors: Suwen \n
 * @LastEditTime: 2019-01-26 17:02:29
 */
#include <iostream>
using namespace std;
int main()
{
    int n, c, d, e = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i]; //将数据存储进ab这两个数组
    }
    for (int i = 1; i <= n - 1; ++i)
    {
        c = a[i]; //读取数组a的数据
        for (int j = i + 1; j <= n; ++j)
        {
            d = a[j]; //输出第2个存储在a的数据
            for (int k = 1; k <= n; ++k)
            {
                if (b[k] == c + d) //读取之前存在数组b中的数
                {
                    e++;      //如果数字相加等于数组中的一个数
                    b[k] = 0; //将这个数字抹除，这一步相当于去重
                }
            }
        }
    }
    cout << e;
    return 0;
}
