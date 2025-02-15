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

    vector<string> S(N);
    vector<int> A(N);

    rep(i, N)
    {
        cin >> S.at(i);
        cin >> A.at(i);
    }

    int min_year = *min_element(A.begin(), A.end());
    int target_index = -1;

    rep(i, N)
    {
        if (A.at(i) == min_year)
        {
            target_index = i;
        }
    }

    for (int i = target_index; i < N; i++)
    {
        cout << S.at(i) << endl;
    }

    for (int i = 0; i < target_index; i++)
    {
        cout << S.at(i) << endl;
    }

    return 0;
}
