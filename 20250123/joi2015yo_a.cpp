#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D, P;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> P;

    int case1 = A * P;

    int case2 = -1;

    if (P <= C)
    {
        case2 = B;
    }
    else
    {
        case2 = B + (P - C) * D;
    }

    cout << min(case1, case2) << '\n';

    return 0;
}