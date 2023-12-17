//Question Link : https://app.codesignal.com/interview-practice/question/yWF4MmhvtmzfKNWgt/description

//Reference : https://math.stackexchange.com/questions/664113/# count-the-ways-to-fill-a-4-times-n-board-with-dominoes

int solution(int n) {
    if(n <= 1){
        return 1;
    }
    
    if(n == 2){
        return 5;
    }
    
    
    vector<int>dp(n+1,0);
    dp[0] =1;
    dp[1] = 1;
    dp[2] = 5;
    dp[3] = 11;
    
    for(int i = 4;i<=n;i++){
        dp[i] = dp[i-1] + 5*dp[i-2] + dp[i-3]-dp[i-4];
    }
    
    return dp[n];
}


