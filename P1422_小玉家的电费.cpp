/*
 * @Coding: utf-8 \n
 * @Despcription:  夏天到了，各家各户的用电量都增加了许多，
 * 相应的电费也交的更多了。
 * 小玉家今天收到了一份电费通知单。
 * 小玉看到上面写：据闽价电[2006]27号规定，
 * 月用电量在150千瓦时及以下部分按每千瓦时0.4463元执行，
 * 月用电量在151~400千瓦时的部分按每千瓦时0.4663元执行，
 * 月用电量在401千瓦时及以上部分按每千瓦时0.5663元执行;小玉想自己验证一下，
 * 电费通知单上应交电费的数目到底是否正确呢。
 * 请编写一个程序，已知用电总计，根据电价规定，计算出应交的电费应该是多少。\n
 * @Author: Suwen \n
 * @Date: 2018-12-06 17:23:14
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-06 17:38:44
 */

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0;
    cin >> n;
    if (n < 150)
    {
        sum = n * 0.4463;
    }
    else if (n < 400)
    {
        sum = 150 * 0.4463 + (n - 150) * 0.4663;
    }
    else
    {
        sum = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    cout << fixed << setprecision(1) << sum;
    return 0;
}