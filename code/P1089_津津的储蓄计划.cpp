/*
 * @Coding: utf-8 \n
 * @Despcription: 津津的零花钱一直都是自己管理。每个月的月初妈妈给津津300300元钱，津津会预算这个月的花销，并且总能做到实际花销和预算的相同。

为了让津津学习如何储蓄，妈妈提出，津津可以随时把整百的钱存在她那里，到了年末她会加上20\%20%还给津津。因此津津制定了一个储蓄计划：每个月的月初，在得到妈妈给的零花钱后，如果她预计到这个月的月末手中还会有多于100100元或恰好100100元，她就会把整百的钱存在妈妈那里，剩余的钱留在自己手中。

例如1111月初津津手中还有8383元，妈妈给了津津300300元。津津预计1111月的花销是180180元，那么她就会在妈妈那里存200200元，自己留下183183元。到了1111月月末，津津手中会剩下33元钱。

津津发现这个储蓄计划的主要风险是，存在妈妈那里的钱在年末之前不能取出。有可能在某个月的月初，津津手中的钱加上这个月妈妈给的钱，不够这个月的原定预算。如果出现这种情况，津津将不得不在这个月省吃俭用，压缩预算。

现在请你根据2004年1月到12月每个月津津的预算，判断会不会出现这种情况。如果不会，计算到2004年年末，妈妈将津津平常存的钱加上20％还给津津之后，津津手中会有多少钱。 \n
 * @Author: Suwen \n
 * @Date: 2018-12-07 22:22:02
 * @LastEditors: Suwen \n
 * @LastEditTime: 2018-12-07 22:56:42
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[12], b = 0, s = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];

        int x = b + 300;
        if (x >= a[i])
        {
            b = x - a[i];
            if (b >= 100)
            {
                int t = b % 100;
                s += b - t;
                b = t;
            }
        }
        else
        {
            cout << -(i + 1) << endl;
            return 0;
        }
    }
    cout << b + int(s * 1.2) << endl;
    return 0;
}
