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

    int answer = -1, max_value = -1;

    rep(i, N)
    {
        int H;

        cin >> H;

        if (H > max_value)
        {
            max_value = H;
            answer = i + 1;
        }
    }

    cout << answer << endl;

    return 0;
}
