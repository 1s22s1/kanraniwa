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

    char c;

    cin >> c;

    if (isupper(c))
    {
        cout << "A" << endl;
    }
    else
    {
        cout << 'a' << endl;
    }

    return 0;
}