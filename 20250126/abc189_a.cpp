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

    string C;

    cin >> C;

    if (C.at(0) == C.at(1) && C.at(0) == C.at(2))
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }

    return 0;
}