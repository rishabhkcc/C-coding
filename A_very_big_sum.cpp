#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long sum;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    
    return 0;
}
