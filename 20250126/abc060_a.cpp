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

    string A, B, C;

    cin >> A >> B >> C;

    if (A.at(A.size() - 1) == B.at(0) && B.at(B.size() - 1) == C.at(0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}