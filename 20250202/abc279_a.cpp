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

    string S;

    cin >> S;

    int answer = 0;
    rep(i, S.size())
    {
        if (S.at(i) == 'v')
        {
            answer += 1;
        }
        else
        {
            answer += 2;
        }
    }

    cout << answer << endl;

    return 0;
}