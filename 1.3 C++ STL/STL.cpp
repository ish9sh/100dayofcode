#include <bits/stdc++.h>
using namespace std;
// prerequisits Pair
void expair()
{
    pair<int, int> p = {1,;
    // array pair
    pair<int, int> arr[] = {{1,, {4, 5;

    cout << p.first << endl
         << p.second << endl;
    // accessing arrays
    cout << arr[0].second << endl
         << arr[1].first;
void exnespair()
{
    pair<int, pair<int, pair<int, int>>> npr = {1, {2, {3, 4;
    // accessing nested pair
    cout << npr.second.second.first;
}
void exvect()

{
    vector<int> v;
    v.emplace_back(5);
    v.push_back(3);
    // pairs in vectors
    vector<pair<int, int>> vr;
    vr.emplace_back(5, 6);
    vr.push_back({7, 8});

    // vector size declaration
    vector<int> v1(5);
    // size with there values
    vector<int> v2(5, 100);
    //coping vector form another vector
    vector<int> v3(v2);
    // accessing vector
    cout << v[0] << endl
         << v2.at(5 - 1);
int main()
{
    // expair();
    // cout<<endl;
    // exnespair();
    exvect();