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

    string D;

    cin >> D;

    string answer;

    if (D == "N")
    {
        answer = "S";
    }
    else if (D == "NE")
    {
        answer = "SW";
    }
    else if (D == "E")
    {
        answer = "W";
    }
    else if (D == "SE")
    {
        answer = "NW";
    }
    else if (D == "S")
    {
        answer = "N";
    }
    else if (D == "SW")
    {
        answer = "NE";
    }
    else if (D == "W")
    {
        answer = "E";
    }
    else if (D == "NW")
    {
        answer = "SE";
    }

    cout << answer << endl;

    return 0;
}