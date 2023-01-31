vector<int> breakingRecords(vector<int> scores) {
    vector<int>ans;
    int high = scores[0];
    int low = scores[0];
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<scores.size(); i++){
        if(high < scores[i]){
            high = scores[i];
            count1++;
        }else if(low > scores[i]){
            low = scores[i];
            count2++;   
        }
        
    }
    ans.push_back(count1);
    ans.push_back(count2);
    
    
return ans;
}
