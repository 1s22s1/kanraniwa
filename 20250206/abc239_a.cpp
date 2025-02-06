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

    long H;

    cin >> H;

    double answer = sqrt(H * (12800000 + H));

    cout << fixed << answer << endl;

    return 0;
}