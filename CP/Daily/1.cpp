

#include <bits/stdc++.h>
using namespace std;

void rev(string &s, int l, int h)
{
    while (l <= h)
    {
        char temp;
        temp = s[l];
        s[l] = s[h];
        s[h] = temp;
        l++;
        h--;
    }
}

string question(string &s)
{
    int l = s.length() - 1;
    int h = 0;
    while (l != 0 && h < s.length())
    {
        while (s[l] != '(' && l >= 0)
        {
            l--;
        }
        while (s[h] != ')' && h < s.length())
        {
            h++;
        }
        if(l>=0 && h<s.length()) rev(s, l, h);
    }

    string ans="";

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] != '(') || (s[i] != ')'))
        {
            ans += s[i];
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << question(s);
    return 0;
}