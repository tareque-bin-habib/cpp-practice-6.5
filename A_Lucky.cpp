#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ticket;
        cin >> ticket;

        int sumFirstHalf = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int sumSecondHalf = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        if (sumFirstHalf == sumSecondHalf)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}