#include <bits/stdc++.h>
using namespace std;
bool cpal(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return cpal(i+1,s);    
}
int main()
{
    cout<<"Enter the String You Wanna to Check :- "<<endl;
    string s;
    cin >> s;
    cout << cpal(0, s);
    return 0;
}