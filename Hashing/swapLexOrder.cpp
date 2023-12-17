//Question : https://app.codesignal.com/interview-practice/question/5vXzdE9yzjsoMZ9sk/description

 unordered_map<int,vector<int>>mp;
void dfs(string &word,string str,vector<int>&vis,vector<int>&ind,int index){
    ind.push_back(index);
    word += str[index];
    vis[index] = 1;
    
    for(auto x:mp[index]){
       if(vis[x] == 1){
           continue;
       }
        dfs(word,str,vis,ind,x);
    }
}




string solution(string str, vector<vector<int>> pairs) {
   
    
    int n = str.size();
    
    for(auto x:pairs){
        mp[x[0]-1].push_back(x[1]-1);
        mp[x[1]-1].push_back(x[0]-1);
    }
    
    vector<int>vis(n,0);
    unordered_map<int,char>res;
    
    for(int i=0;i<n;i++){
        if(vis[i] == 0){
            string word;
            vector<int>ind;
            dfs(word,str,vis,ind,i);
            sort(word.begin(),word.end());
            reverse(word.begin(),word.end());
            sort(ind.begin(),ind.end());
            
            for(int i =0;i<ind.size();i++){
                res[ind[i]] = word[i];
            }
        }
    }
    
    string f;
    for(int i = 0;i<n;i++){
        f += res[i];
    }
    
    
    return f;
}
