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

    int A, B;

    cin >> A >> B;

    if (A + B >= 15 && B >= 8)
    {
        cout << 1 << endl;
    }
    else if (A + B >= 10 && B >= 3)
    {
        cout << 2 << endl;
    }
    else if (A + B >= 3)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 4 << endl;
    }

    return 0;
}