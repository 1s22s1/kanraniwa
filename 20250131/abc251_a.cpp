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

    string S;

    cin >> S;

    for (int i = 0; i < 6 / S.size(); i++)
    {
        cout << S;
    }

    cout << endl;

    return 0;
}