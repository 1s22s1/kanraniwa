#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    cin >> S;

    int length = S.size();

    if (S[length - 1] != 's')
    {
        cout << S << "s\n";
    }
    else
    {
        cout << S << "es\n";
    }

    return 0;
}