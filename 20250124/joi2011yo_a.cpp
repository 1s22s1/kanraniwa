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

    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        int in;

        cin >> in;

        total += in;
    }

    cout << total / 60 << endl;
    cout << total % 60 << endl;

    return 0;
}