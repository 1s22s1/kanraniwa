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

    string s;

    cin >> s;

    cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;

    return 0;
}