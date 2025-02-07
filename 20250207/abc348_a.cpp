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

    rep(i, N)
    {
        if ((i + 1) % 3 == 0)
        {
            cout << 'x';
        }
        else
        {
            cout << 'o';
        }
    }

    cout << endl;

    return 0;
}