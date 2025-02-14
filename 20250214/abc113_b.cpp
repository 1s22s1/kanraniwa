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
    int T, A;

    cin >> N;
    cin >> T >> A;

    A *= 1000;

    int H;
    cin >> H;

    int answer = 1;
    int near_tmp = 1000 * T - 6 * H;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> H;

        int cur_tmp = 1000 * T - 6 * H;

        if (abs(cur_tmp - A) < abs(near_tmp - A))
        {
            near_tmp = cur_tmp;
            answer = i + 2;
        }
    }

    cout << answer << endl;

    return 0;
}
