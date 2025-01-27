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

    cout << (S.at(0) - '0') * (S.at(2) - '0') << endl;

    return 0;
}