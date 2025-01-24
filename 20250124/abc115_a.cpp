#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{
}
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int D;

    cin >> D;

    if (D == 22)
    {
        cout << "Christmas Eve Eve Eve" << endl;
    }
    else if (D == 23)
    {
        cout << "Christmas Eve Eve" << endl;
    }
    else if (D == 24)
    {
        cout << "Christmas Eve" << endl;
    }
    else if (D == 25)
    {
        cout << "Christmas" << endl;
    }

    return 0;
}