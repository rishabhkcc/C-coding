int birthdayCakeCandles(vector<int> candles) {
    vector<long>hash(10000001,0);
    int ans;
    for(int i=0;i<candles.size();i++){
        hash[candles[i]]++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[i]>1){
            ans = hash[i];
        }
    }
    
 return ans;
}
