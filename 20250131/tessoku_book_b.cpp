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
    int A;

    cin >> N >> X;

    rep(i, N)
    {
        cin >> A;

        if (A == X)
        {
            cout << "Yes" << endl;

            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}