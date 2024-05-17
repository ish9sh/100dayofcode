#include <bits/stdc++.h>
using namespace std;
//prerequisits Pair
void expair()
{
    pair<int, int> p = {1, 4};
    // array pair
    pair<int, int> arr[] = {{1, 2}, {4, 5}};

    cout << p.first << endl
         << p.second << endl;
    // accessing arrays
    cout << arr[0].second << endl
         << arr[1].first;
}
void exnespair()
{
    pair < int, pair<int, pair<int, int>>> npr = {1, {2, {3, 4}}};
    //accessing nested pair
    cout<<npr.second.second.first;
}
void exvect()

{
    vector <int> v;
    v.emplace_back(1,2);
    v.push_back(3);
    // pairs in vectors 
    vector <pair<int,int>> vr;
    vr.emplace_back(5,6);
    vr.push_back({7,8});
}
int main()
{
    // expair();
    // cout<<endl;
    // exnespair();
}