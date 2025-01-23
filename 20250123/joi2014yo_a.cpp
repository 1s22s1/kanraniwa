#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main()
{
    int total_score = 0;

    for (int i = 0; i < 5; i++)
    {
        int score;

        cin >> score;

        total_score += max(score, 40);
    }

    cout << total_score / 5 << endl;

    return 0;
}