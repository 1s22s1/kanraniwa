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

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B)
    {
        cout << C << endl;
    }
    else if (B == C)
    {
        cout << A << endl;
    }
    else
    {
        cout << B << endl;
    }

    return 0;
}