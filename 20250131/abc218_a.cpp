#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    string s;

    cin >> n;
    cin >> s;

    if (s.at(n - 1) == 'o')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

int main()
{
    init();

    return 0;
}