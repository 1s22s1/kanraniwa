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

    int N, K;
    int A;

    cin >> N >> K;

    rep(i, N)
    {
        cin >> A;

        if (A % K == 0)
        {
            cout << A / K << ' ';
        }
    }

    cout << endl;

    return 0;
}