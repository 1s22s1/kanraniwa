#include <bits/stdc++.h>

using namespace std;

#define endl '\n';
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string s;

    cin >> s;

    rep(i, s.size())
    {
        if (s.at(i) == '0')
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }

    cout << endl;

    return 0;
}