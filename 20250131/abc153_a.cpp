#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int H, A;

    cin >> H >> A;

    int answer = 0;

    while (H > 0)
    {
        H -= A;

        answer++;
    }

    cout << answer << endl;

    return 0;
}