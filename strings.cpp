#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Himangshu";
    int len = s.size();
    s[len - 1] = 'k';
    cout << s[2];
    cout << len;
    cout << s;
    return 0;
}