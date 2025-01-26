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

    string c;

    cin >> c;

    if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u")
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }

    return 0;
}