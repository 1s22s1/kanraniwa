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

    int answer_0 = 1;

    rep(i, B)
    {
        answer_0 *= A;
    }

    int answer_1 = 1;

    rep(i, A)
    {
        answer_1 *= B;
    }

    cout << answer_0 + answer_1 << endl;

    return 0;
}