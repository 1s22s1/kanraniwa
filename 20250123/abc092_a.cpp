#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << min(a, b) + min(c, d) << '\n';

    return 0;
}