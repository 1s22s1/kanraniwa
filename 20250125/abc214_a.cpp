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

    int N;

    cin >> N;

    if (N <= 125)
    {
        cout << 4 << endl;
    }
    else if (N <= 211)
    {
        cout << 6 << endl;
    }
    else
    {
        cout << 8 << endl;
    }

    return 0;
}