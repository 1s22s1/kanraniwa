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

    int n;

    cin >> n;

    int count = 0;

    cout << 'L';

    while (count < n)
    {
        cout << 'o';

        count++;
    }

    cout << "ng" << endl;

    return 0;
}