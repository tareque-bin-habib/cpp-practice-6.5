#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    string result;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        result += word + " ";
    }

    // Remove the trailing space
    if (!result.empty())
    {
        result.pop_back();
    }

    cout
        << result << endl;
    return 0;
}
