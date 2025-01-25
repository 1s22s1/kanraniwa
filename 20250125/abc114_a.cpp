#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int X;

    cin >> X;

    if (X == 3 || X == 5 || X == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}