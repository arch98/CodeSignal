// Question : https://app.codesignal.com/interview-practice/question/7o2Aba2Zep3MJPKQ3/description

int solution(string message) {
    int n = message.size();
    if(n == 0){
        return 1;
    }
    
    vector<int>dp(n,0);
    if(message[0] == '0'){
        return 0;
    }
    
    int mod = 1e9+7;
    dp[0] =1;
    
    for(int i =1;i<n;i++){
       if(message[i] == '0'){
           int num = (message[i-1]-'0')*10 + (message[i]-'0');
           if(num >= 10 && num <= 26){
               if(i-2 >= 0){
                   dp[i] = (dp[i-2]%mod);
               }else{
                   dp[i] =1;
               }
           }else{
               return 0;
           }
       }else{
           if(message[i-1] == '0'){
               dp[i] = dp[i-1];
           }else{
                int num = (message[i-1]-'0')*10 + (message[i]-'0');
           if(num >= 10 && num <= 26){
               if(i-2 >= 0){
                   dp[i] = (dp[i-2]%mod);
               }else{
                   dp[i] =1;
               }
           }
            dp[i] = (dp[i] + dp[i-1])%mod;
           }
       }
    }
    
    return dp[n-1];
}
