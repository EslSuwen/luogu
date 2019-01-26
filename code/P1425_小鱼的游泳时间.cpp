#include <iostream>
using namespace std;
int main()
{
    int begin[2], end[2], res[2];
    cin >> begin[0] >> begin[1];
    cin >> end[0] >> end[1];
    res[0] = end[0] - begin[0];
    if (end[1] > begin[1])
        res[1] = end[1] - begin[1];
    else
    {
        res[0]--;
        res[1] = end[1] + 60 - begin[1];
    }
    cout << res[0] << " " << res[1] << endl;
    return 0;
}