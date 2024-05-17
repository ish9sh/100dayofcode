#include <bits/stdc++.h>
using namespace std;
// pair
void explPair()
{
    // pair<int, int> p = {1, 3};
    // cout << p.first << " " << p.second;
    pair<int, int> p = make_pair(1,2);
    // cout << p.first <<" "<< p.second.f
    cout<<p.first<<" "<<p.second<<endl;


}
int main()
{
    // explPair();
    // return 0;
    vector<int>v;
    for(int i=0; i<6; i++){
        v.push_back(i);
    }
    cout<<"the element is:"<<v[6];
    cout<<"the element is:"<<v.at(6);
}