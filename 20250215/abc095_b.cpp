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

    int N, X;

    cin >> N >> X;

    vector<int> m(N);

    rep(i, N)
    {
        int calori;
        cin >> calori;

        X -= calori;
        m.at(i) = calori;
    }

    int min_calori = *min_element(m.begin(), m.end());

    cout << N + X / min_calori << endl;

    return 0;
}
