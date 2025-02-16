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

    int answer = -1;

    int top_h;

    cin >> top_h;

    rep(i, N - 1)
    {
        int H;
        cin >> H;

        if (top_h < H)
        {
            answer = i + 2;

            break;
        }
    }

    cout << answer << endl;

    return 0;
}
