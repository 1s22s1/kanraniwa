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

    int A, B;

    cin >> A >> B;

    int answer = 1;

    rep(i, A - B)
    {
        answer *= 32;
    }

    cout << answer << endl;

    return 0;
}