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

    int N, A, B;

    cin >> N >> A >> B;

    rep(i, N)
    {
        int C;

        cin >> C;

        if (A + B == C)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}