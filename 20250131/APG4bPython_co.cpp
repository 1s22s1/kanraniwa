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

    int N;
    int A, B;

    cin >> N;

    int count = 0;

    while (count < N)
    {
        cin >> A >> B;

        cout << A + B << endl;

        count++;
    }

    return 0;
}