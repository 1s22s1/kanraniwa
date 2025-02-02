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
    string S;

    cin >> N >> X;
    cin >> S;

    int answer = X;

    rep(i, N)
    {
        if (S.at(i) == 'o')
        {
            answer++;
        }
        else
        {
            if (answer > 0)
            {
                answer--;
            }
        }
    }

    cout << answer << endl;

    return 0;
}