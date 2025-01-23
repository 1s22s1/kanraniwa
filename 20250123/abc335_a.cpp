#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    cin >> S;

    size_t n = S.size();
    S.at(n - 1) = '4';

    cout << S << '\n';

    return 0;
}