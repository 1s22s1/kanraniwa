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

    vector<int> a(N);

    rep(i, N)
    {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());

    cout << a.at(N - 1) - a.at(0) << endl;

    return 0;
}
