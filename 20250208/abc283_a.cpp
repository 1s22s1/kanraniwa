#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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

    int A, B;

    cin >> A >> B;

    ll answer = 1;

    rep(i, B)
    {
        answer *= A;
    }

    cout << answer << endl;

    return 0;
}