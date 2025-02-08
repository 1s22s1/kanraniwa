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

    int N;
    ll A, B;

    cin >> N;

    rep(i, N)
    {
        cin >> A >> B;

        cout << A + B << endl;
    }

    return 0;
}