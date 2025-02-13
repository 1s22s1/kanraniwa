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

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int max_value = *max_element(A.begin(), A.end());

    int answer = 0;

    rep(i, N)
    {
        if (A.at(i) != max_value)
        {
            answer = max(answer, A.at(i));
        }
    }

    cout << answer << endl;

    return 0;
}