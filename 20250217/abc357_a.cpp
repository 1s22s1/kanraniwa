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

    int N, M;

    cin >> N >> M;

    int answer = 0;

    rep(i, N)
    {
        int H;

        cin >> H;

        M -= H;

        if (M < 0)
        {
            break;
        }
        else
        {
            answer += 1;
        }
    }

    cout << answer << endl;

    return 0;
}
