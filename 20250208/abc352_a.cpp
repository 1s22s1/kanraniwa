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

    int N, X, Y, Z;

    cin >> N >> X >> Y >> Z;

    if (X < Y)
    {
        if (X <= Z && Z <= Y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if (Y <= Z && Z <= X)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}