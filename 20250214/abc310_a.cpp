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

    int N, P, Q;

    cin >> N >> P >> Q;

    vector<int> D(N);

    rep(i, N)
    {
        cin >> D.at(i);
    }

    int min_price = *min_element(D.begin(), D.end());

    cout << min(P, Q + min_price) << endl;

    return 0;
}
