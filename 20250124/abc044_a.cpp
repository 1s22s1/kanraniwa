#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, K, X, Y;

    cin >> N;
    cin >> K;
    cin >> X;
    cin >> Y;

    int answer = X * min(N, K);
    answer += Y * max(0, N - K);

    cout << answer << endl;

    return 0;
}