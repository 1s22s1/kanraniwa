#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{
    return 0;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int X;

    cin >> X;

    if (X >= 90)
    {
        cout << "expert" << endl;
    }
    else if (X >= 70)
    {
        cout << 90 - X << endl;
    }
    else if (X >= 40)
    {
        cout << 70 - X << endl;
    }
    else
    {
        cout << 40 - X << endl;
    }

    return 0;
}