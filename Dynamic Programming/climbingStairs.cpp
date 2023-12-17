// Question link : https://app.codesignal.com/interview-practice/question/oJXTWuwEZiC6FTw3A/description


int solution(int n) {
        if(n == 0){
            return 0;
        }
        
        // We can climb the first step in just one way and the second step in 2 ways.
        if(n <= 2){
            return n;
        }
        
        vector<int>dp(n+1,0);
        dp[1] =1;
        dp[2] = 2;
        
        // To understand how to climb the nth step, we need to see the number of ways we 
        // can climb n-1 and n-2 steps
        for(int i =3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        
        return dp[n];
}
