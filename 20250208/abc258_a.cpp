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

    int K;

    cin >> K;

    int hour = 21, miniute = 0;

    hour += K / 60;
    miniute += K % 60;

    cout << hour << ':';
    cout << setfill('0') << setw(2) << miniute << endl;

    return 0;
}