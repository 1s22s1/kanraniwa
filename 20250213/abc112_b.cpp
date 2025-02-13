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

    int N, T;

    int answer = 100000;

    cin >> N >> T;

    rep(i, N)
    {
        int c, t;

        cin >> c >> t;

        if (t <= T)
        {
            answer = min(answer, c);
        }
    }

    if (answer == 100000)
    {
        cout << "TLE" << endl;
    }
    else
    {
        cout << answer << endl;
    }

    return 0;
}