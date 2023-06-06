#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string target = "EGYPT";
    string replacement = " ";

    int pos = s.find(target);
    while (pos != string::npos)
    {
        s.replace(pos, target.length(), replacement);
        pos = s.find(target, pos + replacement.length());
    }

    cout << s << endl;

    return 0;
}