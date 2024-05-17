#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
int arr[n];
    cin >> n;
    // taking array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precomputation
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
    int number;
        cin >> number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}