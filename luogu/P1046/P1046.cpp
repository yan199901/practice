#include <iostream>
using namespace std;    

int main() {
    int height[10];
    int ans=0,hand;
    for (int i = 0; i < 10; i++) {
        cin >> height[i];
    }
    cin >> hand;
    for (int i = 0; i < 10; i++) {
        ans += height[i]<=hand+30?1:0;   
    }   
    cout << ans << endl;
    return 0;
}