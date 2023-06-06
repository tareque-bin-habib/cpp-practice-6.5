#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int wordCount = 0;
    bool inWord = 0;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!inWord)
            {
                wordCount++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    cout << wordCount << endl;
    return 0;
}