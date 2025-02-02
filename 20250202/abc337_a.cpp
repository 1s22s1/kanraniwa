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

    int N;

    cin >> N;

    int takahashi = 0;
    int aoki = 0;

    rep(i, N)
    {
        int a, b;

        cin >> a >> b;

        takahashi += a;
        aoki += b;
    }

    if (takahashi > aoki)
    {
        cout << "Takahashi" << endl;
    }
    else if (takahashi == aoki)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }

    return 0;
}