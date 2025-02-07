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

    int takahashi = 0;
    int aoki = 0;

    rep(i, 9)
    {
        int A;

        cin >> A;
        takahashi += A;
    }

    rep(i, 8)
    {
        int B;

        cin >> B;
        aoki += B;
    }

    cout << takahashi - aoki + 1 << endl;

    return 0;
}