#include <bits/stdc++.h>
using namespace std;
// Print N Times Through Recursion
void prntntms(int n)
{
    if (n == 0)
        return;
    cout << "Ishesh" << " ";
    prntntms(n - 1);
}
// Print 1 to N Though Recursion
void prntnums(int n)
{
    if (n == 0)
    {
        return;
    }
    prntnums(n - 1);
    cout << n << " ";
}
// Sum of First N Numbers through Parameterised way
void sumn(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumn(i - 1, sum + i);
}
// function method
int sumnf(int n)
{
    if (n == 0)
    {
        // cout << n;
        return 0;
    }
    return n + sumnf(n - 1);
}
// Reverse an Array functional way
void revarf(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    revarf(i + 1, arr, n);
}
int main()
{
    cout << "Enter the Number of Recursive Iterations you want : - ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // cout << arr[i]+2<<" ";
    // prntntms(n);
    // prntnums(n);
    // sumn(n,0);
    // sumnf(n);
    // cout<<sumnf(n);
    revarf(0, arr, n);
    // reversed array through fxn
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}