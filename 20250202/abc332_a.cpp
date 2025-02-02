#include <bits/stdc++.h>

using namespace std;

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

    int N, S, K;

    cin >> N >> S >> K;

    int answer = 0;

    rep(i, N)
    {
        int P, Q;

        cin >> P >> Q;

        answer += P * Q;
    }

    if (answer < S)
    {
        answer += K;
    }

    cout << answer << endl;

    return 0;
}