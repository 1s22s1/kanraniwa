#include <bits/stdc++.h>

using namespace std;

#define endl '\n';
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N;
    char c1, c2;
    string S;

    cin >> N >> c1 >> c2;
    cin >> S;

    for (char c : S)
    {
        if (c == c1)
        {
            cout << c1;
        }
        else
        {
            cout << c2;
        }
    }

    cout << endl;

    return 0;
}