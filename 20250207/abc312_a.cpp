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

    string S;

    cin >> S;

    if (S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "EGB" || S == "FAC" || S == "GBD")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}