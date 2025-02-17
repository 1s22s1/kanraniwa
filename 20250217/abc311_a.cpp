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

    int N;
    string S;

    cin >> N;
    cin >> S;

    bool flag_A = false, flag_B = false, flag_C = false;

    int answer = -1;

    rep(i, N)
    {
        if (S.at(i) == 'A')
        {
            flag_A = true;
        }

        if (S.at(i) == 'B')
        {
            flag_B = true;
        }

        if (S.at(i) == 'C')
        {
            flag_C = true;
        }

        if (flag_A && flag_B && flag_C)
        {
            answer = i + 1;

            break;
        }
    }

    cout << answer << endl;

    return 0;
}
