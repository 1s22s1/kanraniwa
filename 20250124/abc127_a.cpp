#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;

    if (A >= 13)
    {
        cout << B << endl;
    }
    else if (A >= 6)
    {
        cout << B / 2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}