#include <iostream>
using namespace std;

int main() {
  int t;
  unsigned long long int s, a, b, c;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> s >> a >> b >> c;
    unsigned long long int numFree = b * (s / (a * c));
    unsigned long long int numBuy = ((s / (a * c))) * a;
    unsigned long long int remMon = s - (numBuy * c);
    unsigned long long int remBuy = remMon / c;
    unsigned long long int total = numBuy + numFree + remBuy;
    cout << total << endl;
  }
}
