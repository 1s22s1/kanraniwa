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
    int answer = 0;

    cin >> N;

    int A;

    rep(i, N)
    {
        cin >> A;

        answer += A;
    }

    cout << answer << endl;

    return 0;
}