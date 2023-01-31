vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int A=0,B=0;
   for(int i=0;i<a.size();i++){
       if(a[i]>b[i]){
           A++;
       }else if(b[i]==a[i]){
           A+=0;
           B+=0;
       }else{
           B+=1;
       }
   }
   return {A,B};
}
