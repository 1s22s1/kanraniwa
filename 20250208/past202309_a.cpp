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

    int M;

    cin >> M;

    if (4 <= M && M <= 9)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}