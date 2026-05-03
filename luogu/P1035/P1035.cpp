#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    double sn=0, n=0;

    while (sn<=k) {
        n++;
        sn+=1/n;
    }

    cout << n << endl;

    return 0;
}