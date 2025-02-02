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
    string S, T;

    cin >> N;
    cin >> S >> T;

    int answer = 0;

    rep(i, N)
    {
        if (S.at(i) != T.at(i))
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}