#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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

    string S;

    cin >> S;

    for (char c : S)
    {
        if (c != 'a')
        {
            if (c != 'e')
            {
                if (c != 'i')
                {
                    if (c != 'o')
                    {
                        if (c != 'u')
                        {
                            cout << c;
                        }
                    }
                }
            }
        }
    }

    cout << endl;

    return 0;
}
