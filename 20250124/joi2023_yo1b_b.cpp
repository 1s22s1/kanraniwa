#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int A, B;

    cin >> A;
    cin >> B;

    if (A > B)
    {
        cout << 1 << endl;
    }
    else if (A == B)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}