/*
 * @Coding: utf-8 \n
 * @Despcription:  \n
 * @Author: Suwen SP \n
 * @Date: 2019-05-19 15:55:08
 * @LastEditors: Suwen SP\n
 * @LastEditTime: 2019-05-19 16:25:48
 */
#include <iostream>
using namespace std;
int main()
{
    int n;        //总天数
    int ans = 1;  //结果
    int temp = 1; //暂存结果
    int t1, t2;   //第一第二天的天气
    cin >> n;
    cin >> t1;
    for (int i = 1; i < n; i++)
    {
        cin >> t2;
        if (t1 < t2) //只需要判断输入的温度是否比前一天的高
            temp++;
        else
        {
            if (ans < temp)
                ans = temp;
            temp = 1;
        }
        t1 = t2;
    }
    cout << ans << endl;
    return 0;
}