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

    int N, X;

    cin >> N >> X;

    int P;
    rep(i, N)
    {
        cin >> P;

        if (X == P)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}