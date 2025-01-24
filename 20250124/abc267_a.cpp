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

    string S;

    cin >> S;

    if (S == "Monday")
    {
        cout << 5 << endl;
    }
    else if (S == "Tuesday")
    {
        cout << 4 << endl;
    }
    else if (S == "Wednesday")
    {
        cout << 3 << endl;
    }
    else if (S == "Thursday")
    {
        cout << 2 << endl;
    }
    else if (S == "Friday")
    {
        cout << 1 << endl;
    }

    return 0;
}