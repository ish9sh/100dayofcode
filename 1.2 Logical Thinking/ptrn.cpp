#include <bits/stdc++.h>
using namespace std;
// P1
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
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
// P2
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
void ptrn2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// P3
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// we have to start the loop from one eather it print zeroes too and we have to print number of column j
void ptrn3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// P4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// we have to print number of rows "i" in this pattern :)
void ptrn4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
// P5
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
void ptrn5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
// P6
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void ptrn6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// P7
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5
void ptrn7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}
// P8
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
void ptrn8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}
// P9
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
void ptrn9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
// P10
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
void ptrnx(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
// P11
//   *
//   **
//   ***
//   ****
//   *****
//   ******
//   *****
//   ****
//   ***
//   **
//   *
void ptrnxi(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i >= n)
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// P12
// 1
// 01
// 101
// 0101
// 10101
// 010101
void ptrn12(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
// P13
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void ptrn13(int n)
{
    int spcs = 2 * n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spcs - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
// P14
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
void ptrn14(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
// P15
// A
// A B
// A B C
// A B C D
// A B C D E
void ptrn15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
// P16
//  ABCDEF
//  ABCDE
//  ABCD
//  ABC
//  AB
//  A
void ptrn16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
// P19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void ptrn19(int m)
{
    for (int i = 0; i < m; i++)
    {
        // stars
        for (int j = 0; j < m - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = m - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // now second half of tht code
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * m - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// P20
//  *          *
//  **        **
//  ***      ***
//  ****    ****
//  *****  *****
//  ************
//  *****  *****
//  ****    ****
//  ***      ***
//  **        **
//  *          *
void ptrn20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // now the sec half
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// P21
//  ******
//  *    *
//  *    *
//  *    *
//  *    *
//  *    *
//  ******
void ptrn21(int n)
{
    // my approach to this pattern
    //  horizontal stars
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << "*";
    //  }
    //  cout << endl;
    //  // left vertical stars
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      cout << "*";
    //      // center spaces
    //      for (int j = 0; j < n - 2; j++)
    //      {
    //          cout << " ";
    //      }
    //      // right vertical column
    //      cout << "*";
    //      cout << endl;
    //  }
    //  bottom horizontal row
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << "*";
    //  }
    //  cout << endl;

    // striver's better B approach
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
// P22
//  3 3 3 3 3
//  3 2 2 2 3
//  3 2 1 2 3
//  3 2 2 2 3
//  3 3 3 3 3
void ptrn22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int right = (2 * n - 2) - j, left = (2 * n - 2) - i, top = i, bottom = j;
            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
}
void myptrnxi(int n)
{
    ptrn9(n);
    ptrnx(n);
}
int main()
{
    int n;
    cout << "Enter the number of Rows*Columns : " << endl;
    cin >> n;
    cout << "Okay! Here is the Pattern that you want :" << endl;
    // ptrn1 (n);
    // ptrn2 (n);
    // ptrn3 (n);
    // ptrn4 (n);
    // ptrn5 (n);
    // ptrn6 (n);
    // ptrn7 (n);
    // ptrn8(n);
    // ptrn9(n);
    // ptrnx(n);
    ptrnxi(n);
    // ptrn12 (n);
    // ptrn13(n);
    // ptrn14(n);
    // ptrn15 (n);
    // ptrn16 (n);
    // ptrn17 (n);
    // ptrn18 (n);
    // ptrn19(n);
    // ptrn20 (n);
    // ptrn21(n);
    // ptrn22(n);
    // return 0;
}