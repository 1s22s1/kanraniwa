#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    cout << max(A - B * 2, 0) << '\n';

    return 0;
}