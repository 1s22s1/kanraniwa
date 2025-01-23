#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D, E, F;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    cin >> F;

    int answer = A + B + C + D + E + F;

    answer -= min({A, B, C, D});
    answer -= min(E, F);

    cout << answer << '\n';

    return 0;
}