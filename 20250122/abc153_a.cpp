#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, a;

    cin >> h >> a;

    int answer = h / a;

    if (h % a != 0)
    {
        answer++;
    }

    cout << answer << endl;

    return 0;
}