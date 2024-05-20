#include <bits/stdc++.h>
using namespace std;
// prerequisits Pair
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
// nested pairs
void exnespair()
{
    pair<int, pair<int, pair<int, int>>> npr = {1, {2, {3, 4}}};
    // accessing nested pair
    cout << npr.second.second.first;
}
// Vectors
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
    // coping vector
    vector<int> v3(v2);
    // accessing vector
    // cout << v[0] << endl
    //      << v2.at(5 - 1) << endl
    //      << v3[3] + 455;

    // Iterators
    vector<int>::iterator it = v2.begin();
    it + 1;
    cout << endl
         << "Print Through Iterator" << endl
         << *(it) << endl
         << "Printed through itrator loop";
    // end points to the memory location Right after Last element
    // vector<int>::iterator ite = v2.end();
    // rend points to the memory location Left before the first element
    // vector<int>::iterator itre = v1.rend();
    // rbegin points to the last element of the vector
    // vector<int>::iterator itrb = v3.rbegin();

    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *(it) << " " << endl;
    }
    // or we can use auto functilon
    cout<<"through auto function";
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout <<endl
              << *(it) << " " << endl;
    }
    cout<<"through for each loop"<<endl;
    for (auto it : v2)
    {
        cout<<it <<" ";
    }

    //Erasing Vectors

    v.erase(v.begin()+1);
    //Erasing Multiple Lines at Once
    // {10,30,20,100,40,50}
    v.erase(v.begin()+1,v.begin()+3);
    //{10,100,40,50}

    //Inserting Elements
    
}
int main()
{
    // expair();
    // cout<<endl;
    // exnespair();
    exvect();
}