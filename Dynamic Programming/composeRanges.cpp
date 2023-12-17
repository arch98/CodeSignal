//Question link : https://app.codesignal.com/interview-practice/question/cHYqbQ9DiWmejAdeG/description

vector<string> solution(vector<int> nums) {
    vector<string>res;
    int n = nums.size();
    if(n == 0){
        return res;
    }
    //We keep track of the starting and the end
    int start = nums[0],end = nums[0];
    for(int i = 1;i<n;i++){
        if(end+1 == nums[i]){
            end = nums[i];
        }else{
            if(start != end){
                // Here we have found a range
                string y = to_string(start) + "->" + to_string(end);
                res.push_back(y);
                start = nums[i];
                end = nums[i];
            }else{
                // This is not a range
                string y = to_string(start);
                res.push_back(y);
                start = nums[i];
                end = nums[i];
            }
        }
    }
    
    //This is for the last range or number
    if(start != end){
         string y = to_string(start) + "->" + to_string(end);
                res.push_back(y);
    }else{
         string y = to_string(start);
                res.push_back(y);
    }
    
    return res;
}
