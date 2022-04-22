#include <cmath>
#include <iostream>

using namespace std;

void cv(string &cn) {
  if (cn.length() > 16 || cn.length() < 16) {
    cout << "Invalid Card Length"
         << "\n";
  } else {
    cout << "Valid Card Length"
         << "\n";
  }
}

void luhn(string &cn) {
  int len = cn.length();
  int sum;
  for (int i = len - 2; i >= 0; i = i - 2) {
    int dblnum = ((cn[i] - 48) * 2);
    if (dblnum > 9) {
      dblnum -= 9;
    }
    sum += dblnum;
  }

  for (int i = len - 1; i >= 0; i = i - 2) {
    sum += (cn[i] - 48);
  }

  if (sum % 10 == 0) {
    cout << "Valid Card Number"
         << "\n";
  } else {
    cout << "Invalid Card Number"
         << "\n";
  }
}

void bin(string &cn) {
  string bin;
  bin = cn.substr(0, 6);
  cout << bin << "\n";
}

void bininfo(string &cn) {
  switch (cn[0]) {
  case '1':
    cout << "Airlines, Unknown"
         << "\n";
    break;
  case '2':
    cout << "Airlines & Financial, Unknown"
         << "\n";
    break;
  case '3':
    cout << "Travel & Entertainment, American Express"
         << "\n";
    break;
  case '4':
    cout << "Banking & Financial, Visa"
         << "\n";
    break;
  case '5':
    cout << "Banking & Financial, Master Card"
         << "\n";
  case '6':
    cout << "Merchanding & Banking, Discover"
         << "\n";
    break;
  case '7':
    cout << "Petroleum, Unknown"
         << "\n";
    break;
  case '8':
    cout << "Health Care & Communications, Unknown"
         << "\n";
    break;
  default:
    cout << "Unknown, Unknown"
         << "\n";
    break;
  }
}

int main() {
  string cn;
  cout << "Enter the Credit Card Number: ";
  cin >> cn;
  cv(cn);
  luhn(cn);
  bin(cn);
  bininfo(cn);
}
