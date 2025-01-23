#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    int pasta = 10000;

    for (int i = 0; i < 3; i++)
    {
        int num;

        cin >> num;

        pasta = min(num, pasta);
    }

    int juice = 10000;
    for (int i = 0; i < 2; i++)
    {
        int num;

        cin >> num;

        juice = min(num, juice);
    }

    cout << pasta + juice - 50 << endl;

    return 0;
}