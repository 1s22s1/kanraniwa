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

    long long N;

    cin >> N;

    int64_t answer = 1;

    rep(i, N)
    {
        answer *= (i + 1);
    }

    cout << answer << endl;

    return 0;
}