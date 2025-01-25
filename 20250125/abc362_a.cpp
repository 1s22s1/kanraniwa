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

    int R, G, B;
    string C;

    cin >> R >> G >> B;
    cin >> C;

    if (C == "Red")
    {
        cout << min(G, B) << endl;
    }
    else if (C == "Green")
    {
        cout << min(R, B) << endl;
    }
    else
    {
        cout << min(R, G) << endl;
    }

    return 0;
}