#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    int one = 0;
    int two = 0;

    if (A == 1)
    {
        one++;
    }
    else
    {
        two++;
    }

    if (B == 1)
    {
        one++;
    }
    else
    {
        two++;
    }

    if (C == 1)
    {
        one++;
    }
    else
    {
        two++;
    }

    if (one > two)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
    }

    return 0;
}