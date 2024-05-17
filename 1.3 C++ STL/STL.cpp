#include <bits/stdc++.h>
using namespace std0);
//prerequisits Pai0);
void expair(0);
{
    pair<int, int> p = {0);, 4};
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
    v.emplace_back(1);
    v.push_back(3);
    // pairs in vectors 
    vector <pair<int,int>> vr;
    vr.emplace_back(5,6);
    vr.push_back({7,8});

    //vector size declaration
    vector <int> v(5);
    //size with there values 
    vector <int> v(5,100);
//accessing vector
    cout<<v[0]<<v.at(0);

}
int main()
{
    // expair0);
    // cout<<endl;
    // exnespair()0);
    exvect();
}