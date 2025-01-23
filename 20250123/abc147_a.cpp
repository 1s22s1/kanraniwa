#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A1, A2, A3;

    cin >> A1 >> A2 >> A3;

    if (A1 + A2 + A3 >= 22)
    {
        cout << "bust\n";
    }
    else
    {
        cout << "win\n";
    }

    return 0;
}