#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);

    int A1, A2, A3, A4;

    cin >> A1 >> A2 >> A3 >> A4;

    int B1, B2, B3, B4;

    cin >> B1 >> B2 >> B3 >> B4;

    cout << max(A1 + A2 + A3 + A4, B1 + B2 + B3 + B4) << endl;

    return 0;
}