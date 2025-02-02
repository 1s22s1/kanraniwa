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

    int N;
    string S, T;

    cin >> N;
    cin >> S >> T;

    rep(i, N)
    {
        cout << S.at(i) << T.at(i);
    }

    cout << endl;

    return 0;
}