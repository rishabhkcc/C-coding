#include <iostream>
using namespace std;

int greater_number(int i, int j, int k, int l){
    
    int p = max(i,j);
    int q = max(k,l);
    return max(p,q);
}

int main() {
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    int ans = greater_number(i,j,k,l);
    cout<<ans;
    return 0;
}
