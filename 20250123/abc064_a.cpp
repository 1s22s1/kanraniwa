#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int r, g, b;

    cin >> r >> g >> b;

    if ((100 * r + 10 * g + b) % 4 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}