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
    int a;

    cin >> N;

    rep(i, N)
    {
        cin >> a;

        if (a % 2 == 0)
        {
            cout << a << " ";
        }
    }

    cout << endl;

    return 0;
}