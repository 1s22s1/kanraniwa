#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    cin >> S;

    int answer = 700;

    for (char c : S)
    {
        if (c == 'o')
        {
            answer += 100;
        }
    }

    cout << answer << '\n';

    return 0;
}