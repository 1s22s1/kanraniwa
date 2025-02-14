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

    cin >> N;

    vector<int> p(N);

    rep(i, N)
    {
        cin >> p.at(i);
    }

    int max_value = *max_element(p.begin(), p.end());
    int sum = accumulate(p.begin(), p.end(), 0);

    cout << sum - max_value / 2 << endl;

    return 0;
}
