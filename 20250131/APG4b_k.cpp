#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    // ここにプログラムを追記

    int countA = 0;
    int countB = 0;

    cout << "A:";
    while (countA < A)
    {
        cout << ']';

        countA++;
    }

    cout << endl;

    cout << "B:";
    while (countB < B)
    {
        cout << ']';

        countB++;
    }

    cout << endl;
}
