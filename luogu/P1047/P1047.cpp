#include <iostream>
using namespace std;

int main() {
    int l,m;
    cin >> l >> m;
    int tree[l]={0};
    int t=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        for(int j=a-1;j<=b-1;j++){
            if (tree[j]==0){
                t++;
                tree[j]=1;
            }
            else{
                continue;
            }
        }
    }
    cout << l-t+1 << endl;
    return 0;
}