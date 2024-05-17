#include <bits/stdc++.h>
using namespace std;
int fibmr(int n)
{
    if (n <= 1)
        return n;
    return fibmr(n - 1) + fibmr(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibmr(n);
}