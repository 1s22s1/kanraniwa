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
    int a, b;

    cin >> S;
    cin >> a >> b;

    char swap = S.at(a - 1);
    S.at(a - 1) = S.at(b - 1);
    S.at(b - 1) = swap;

    cout << S << endl;

    return 0;
}