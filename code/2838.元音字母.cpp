#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    while(1)
    {
        string str;
        getline(cin, str);
        if (str == "end")
            return 0;
        for (int i = 0; i < str.size(); i++)
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                cout << str[i];
        cout << endl;
    }
    return 0;
}