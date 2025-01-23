#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    char op;

    cin >> A >> op >> B;

    if (op == '+')
    {
        cout << A + B << '\n';
    }
    else
    {
        cout << A - B << '\n';
    }

    return 0;
}