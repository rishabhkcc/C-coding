#include <iostream>
using namespace std;

int main(){
    int n,leftsum=0,rightsum=0,final_sub=0;
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
          cin>>arr[i][j];  
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
               leftsum+=arr[i][j];  
            }
        
               
        }
    }
    
     for (int i = 0; i < n; i++) 
  {
    for (int j = n - 1 - i; j >= 0;) 
    {
      rightsum = rightsum + arr[i][j];
      break;
    }
  }
    final_sub=leftsum-rightsum;
            
    cout<<abs(final_sub);
    
    
    return 0;
}
