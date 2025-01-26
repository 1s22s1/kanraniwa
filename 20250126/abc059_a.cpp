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

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    cout << (char)toupper(s1.at(0)) << (char)toupper(s2.at(0)) << (char)toupper(s3.at(0)) << endl;

    return 0;
}