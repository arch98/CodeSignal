// Question link : https://app.codesignal.com/interview-practice/question/xrFgR63cw7Nch4vXo/description


vector<vector<string>> solution(vector<vector<string>> dishes) {
    unordered_map<string,vector<string>>mp;
    int n = dishes.size();
    for(int i = 0;i<n;i++){
        string dish = dishes[i][0];
        for(int j = 1;j<dishes[i].size();j++){
            mp[dishes[i][j]].push_back(dish);
        }
    }
    
    vector<string>f;
    vector<vector<string>>res;
    
    for(auto x = mp.begin();x!=mp.end();x++){
        sort(x->second.begin(),x->second.end());
        f.push_back(x->first);
    }
    
    
    sort(f.begin(),f.end());
    
    for(auto x:f){
        vector<string>t;
        t.push_back(x);
        for(auto y:mp[x]){
            t.push_back(y);
        }
        if(t.size() >= 3){
        res.push_back(t);
        }
    }
    
    return res;
    
}