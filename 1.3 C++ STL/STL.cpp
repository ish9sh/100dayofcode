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
         << "Printed through itrator loop" << endl;
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
    cout << "through auto function";
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << endl
             << *(it) << " ";
    }
    // cout << "through for each loop" << endl;
    // for (auto it : v2)
    // {
    //     cout << it << " ";
    // }

    // Erasing Vectors

    v.erase(v.begin() + 1);
    // Erasing Multiple Lines at Once
    //  {10,30,20,100,40,50}
    v.erase(v.begin() + 1, v.begin() + 3);
    //{10,100,40,50}
    // Inserting Elements
    vector<int> v4(2, 100);
    v4.insert(v4.begin(), 2, 200);
    v4.insert(v4.begin() + 3, 2, 300);
    vector<int> copy(2, 400);
    v4.insert(v4.end() - 4, copy.begin(), copy.end());
    vector<int>::iterator itr = v4.begin();
    cout << "Printing Inserted V4";
    // for (auto itr = v4.begin()+2; itr != v4.end(); itr++)
    // {

    //     cout << " " << *(itr);
    // }
    cout << v4.size();
    // deletes last element of vector
    v4.pop_back();
    // swap used to swap two vectors
    v4.swap(v3);
    // clear deletes all element of the vector
    v4.clear();
    cout << v4.empty();
}
// next is list list is also a container similar to vector but with suppport for front push too
void explst()
{
    list<int> ls;
    ls.push_front(2);
    ls.emplace_front(4);
    ls.push_back(5);
    ls.emplace_back(6);
    // rest operations are same as vector i.e size,swap,rend,begin,rbegine,end etc
}
// deque
void exdeque()
{
    deque<int> dq;
    dq.push_front(5);
    dq.emplace_back(6);
    dq.push_back(60);
    dq.emplace_front(7);

    dq.pop_back();
    dq.pop_front();
    dq.front();
    dq.back();
    // rest operations are same as vectors and list
}
void exstc()
{
    // LIFO
    stack<int> stc;
    stc.push(2);
    stc.push(5);
    stc.emplace(6);
    stc.emplace(40);
    cout << stc.top() << endl;
    stc.pop();
    cout << stc.top();
    cout << endl
         << "Size of Stack : " << stc.size();
    cout << stc.empty();
    stack<int> stc1, stc2;
    stc1.swap(stc2);
    // Time Complexiitiy = O(1)
}
void exque()
{
    queue<int> qu;
    qu.push(7);
    qu.push(5);
    qu.push(4);
    qu.push(3);
    qu.emplace(6);
    qu.emplace(6);
    cout << qu.back() << endl;
    qu.pop();
    cout << qu.front() << endl;
    qu.pop();
    cout << qu.front();
    // rest oprations are same as stack i.e size , swap
}
void exprique()
{
    priority_queue<int> pq;
    pq.push(6);
}
int main()
{
    // expair();
    // cout<<endl;
    // exnespair();
    // exvect();
    exstc();
}