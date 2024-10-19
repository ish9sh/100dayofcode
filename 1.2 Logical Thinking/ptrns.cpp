#include <iostream>
#include <ostream>
using namespace std;
void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void patrn2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void patrn3(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void patrn4(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void patrn5(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}
void patrn6(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " ";
    }
    for (int k = 0; k < (2 * i + 1); k++) {
      cout << "*";
    }
    cout << endl;
  }
}
void patrn7(int n) {
  for (int i = 0; i < n; i++) {

    for (int h = 0; h < i; h++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * (n - i) - 1; j++) {
      cout << "*";
    }

    cout << endl;
  }
}
void patrn8(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    cout << endl;
  }
  {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        cout << " ";
      }
      for (int k = 0; k < 2 * (n - i) - 1; k++) {
        cout << "*";
      }
      cout << endl;
    }
  }
}
void patrn9(int n) {

  for (int i = 0; i + 1 < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < n - i; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
void btrpatrn9(int n) {
  for (int i = 01; i < 2 * n; i++) {
    int stars = i;
    if (i > n) {
      stars = 2 * n - i;
    }
    for (int j = 0; j < stars; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
void ptrnx(int n) {
  int a = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      a = 1;
    else
      a = 0;

    for (int j = 0; j <= i; j++) {
      cout << a;
      a = 1 - a;
    }
    cout << endl;
  }
}
int main() {
  int x;
  cin >> x;
  ptrnx(x);
}
