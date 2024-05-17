#include <bits/stdc++.h>
using namespace std;

// using namespace std;

void ptrn1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void ptrn2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
       }
        cout << endl;
    }
}
void ptrn3(int n)
{
    for (int i = 1; i < n; i++)
    {
        // cout<<i<<" ";
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
            // cout << i;
        }
        cout << endl;
    }
}
void ptrn4(int n)
{
    for (int i = 1; i < n; i++)
    {
        // cout<<i<<" ";
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
            // cout << i;
        }
        cout << endl;
    }
}
void ptrn5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void ptrn6(int n)
// print
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void ptrn7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void ptrn8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // spaces
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // stars
        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}
void ptrn9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (i * 2 + 1); j++)
        // or for (intj=0;j<n*2-i*2-1;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrnx(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (i * 2 + 1); j++)
        // or for (intj=0;j<n*2-i*2-1;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrnxi(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrnxx(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n * 2 - 2 * (i + 1); j++)
        {
            cout << " ";
        }
        // stars

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = n - 1; j > i; j--)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= i * 2 + 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = n - 1; j > i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
int main()
{
    int r, c, n, t;
    cout << "Enter the number of Lines N*M You want " << endl;
    cin >> r;
    ptrn5(r);
    return 0;
}
