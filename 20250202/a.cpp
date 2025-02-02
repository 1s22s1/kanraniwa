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
    vector<int> vec(5);

    cin >> N;
    rep(i, N)
    {
        cin >> vec.at(i);
    }

    rep(i, N)
    {
        cout << vec.at(i) << endl;
    }

    return 0;
}