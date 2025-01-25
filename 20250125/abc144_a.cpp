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

    if (1 <= A && A <= 9 && 1 <= B && B <= 9)
    {
        cout << A * B << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}