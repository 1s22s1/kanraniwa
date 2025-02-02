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

    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    rep(i, N)
    {
        cin >> B.at(i);
    }

    int inner_product = 0;

    rep(i, N)
    {
        inner_product += A.at(i) * B.at(i);
    }

    if (inner_product == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}