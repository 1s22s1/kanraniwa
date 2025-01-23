#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;

    cout << max(2 * A + 100 - B, 0) << endl;

    return 0;
}