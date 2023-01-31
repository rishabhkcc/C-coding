void miniMaxSum(vector<int> arr) {
    long int max=0,min=0;
    sort(arr.begin(),arr.end());
    for(int i = 0;i<arr.size()-1;i++){
        max=max+arr[i];
    }
    for(int i=1;i<arr.size();i++){
        min=min+arr[i];
    }
    cout<<max<<" "<<min;

}
