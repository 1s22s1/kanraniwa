#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    cin >> S;

    int answer = 0;
    for (char c : S)
    {
        if (c == '1')
        {
            answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}