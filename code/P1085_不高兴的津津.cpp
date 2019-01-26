/*
 * @Coding: utf-8 \n
 * @Despcription: 津津上初中了。妈妈认为津津应该更加用功学习，
 * 所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。
 * 另外每周妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，
 * 而且上得越久就会越不高兴。假设津津不会因为其它事不高兴，并且她的不高兴不会持续到第二天。
 * 请你帮忙检查一下津津下周的日程安排，看看下周她会不会不高兴；如果会的话，哪天最不高兴。 \n
 * @Author: Suwen \n
 * @Date: 2018-12-07 22:08:02
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-07 22:17:45
 */

#include <iostream>
using namespace std;
int main()
{
    int a, b, c[7], max = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a >> b;
        c[i] = a + b;
        if (c[max] < c[i])
            max = i;

    }
    if (c[max] > 8)
        cout << max + 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}