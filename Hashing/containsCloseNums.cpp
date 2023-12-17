//Question link:https://app.codesignal.com/interview-practice/question/njfXsvjRthFKmMwLC/description

bool solution(vector<int> nums, int k) {
    unordered_map<int,int>mp;

    bool ans = false;
    for(int i =0;i<nums.size();i++){
        if(mp.find(nums[i]) != mp.end()){
            int dist = (i-mp[nums[i]]);
            if(dist <= k){
                return true;
            }
        }
        
        mp[nums[i]] = i;   
    }
    
    
    return false;
}
