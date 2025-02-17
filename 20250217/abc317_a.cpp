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

    int N, H, X;

    cin >> N >> H >> X;

    int answer = -1;

    rep(i, N)
    {
        int P;

        cin >> P;

        if (H + P >= X)
        {
            answer = i + 1;

            break;
        }
    }

    cout << answer << endl;

    return 0;
}
