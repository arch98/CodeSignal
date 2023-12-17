//Question link: https://app.codesignal.com/interview-practice/question/rMe9ypPJkXgk3MHhZ/description

int solution(vector<int> coins, vector<int> quantity) {
    unordered_set<int>nums;
    nums.insert(0);
    
    int n = coins.size();
    
    for(int i = 0;i<n;i++){
        vector<int>tn;
        for(int j=1;j<=quantity[i];j++){
            for(auto x:nums){
                int tmp = x + (j*coins[i]);
                if(nums.find(tmp) == nums.end()){
                    tn.push_back(tmp);
                }
            }
        }
        
        for(auto x:tn){
            nums.insert(x);
        }
    }
    
    return nums.size()-1;
}

