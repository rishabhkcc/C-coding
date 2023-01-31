void plusMinus(vector<int> arr) {
    double p=0,n=0,z=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
           p+=1; 
        }else if(arr[i]==0){
            z+=1;
        }else{
            n+=1;
        }
    }
    double positive = (p/arr.size());
    double negative = (n/arr.size());
    double zero = (z/arr.size());
    
    cout<<positive<<endl;
    cout<<negative<<endl;
    cout<<zero<<endl;
     
}
