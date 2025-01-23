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

    if (A == 1 && B == 2 || A == 2 && B == 1)
    {
        cout << 3 << endl;

        return 0;
    }

    if (A == 2 && B == 3 || A == 3 && B == 2)
    {
        cout << 1 << endl;

        return 0;
    }

    if (A == 1 && B == 3 || A == 3 && B == 1)
    {
        cout << 2 << endl;

        return 0;
    }
    return 0;
}