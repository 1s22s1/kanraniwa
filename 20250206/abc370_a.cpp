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

    int L, R;

    cin >> L >> R;

    if (L == 1 && R == 0)
    {
        cout << "Yes" << endl;
    }
    else if (L == 0 && R == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}